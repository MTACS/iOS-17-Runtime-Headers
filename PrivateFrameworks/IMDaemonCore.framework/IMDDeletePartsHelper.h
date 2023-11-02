
@interface IMDDeletePartsHelper : NSObject

+ (bool)_convertDeletedPartsDict:(id)arg1 toIndexSet:(id*)arg2 toMap:(id*)arg3;
+ (id)_makeDeletePartsDictFor:(id)arg1 withIndexes:(id)arg2 withIndexToRangeMap:(id)arg3 deleteDate:(id)arg4;
+ (unsigned long long)_unsignedIntegerFromString:(id)arg1;

@end
