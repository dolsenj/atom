// Testing outliers for tab length
                                               // outlier
                                                          // outlier
                                                                      // outlier

var quicksort = function () {
  var sort = function(items) {
    if (items.length <= 1) return items;
    var pivot = items.shift(), current, left = [], right = [];
    while(items.length > 0) {
                                              // outlier
      current = items.shift();
      current < pivot ? left.push(current) : right.push(current);
    }
                                    // outlier
    return sort(left).concat(pivot).concat(sort(right));
  };

  return sort(Array.apply(this, arguments));
};
                                                                                          // outlier
