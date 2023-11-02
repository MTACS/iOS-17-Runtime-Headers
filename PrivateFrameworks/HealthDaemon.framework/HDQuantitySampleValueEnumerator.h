
@interface HDQuantitySampleValueEnumerator : NSObject

+ (bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;

@end
