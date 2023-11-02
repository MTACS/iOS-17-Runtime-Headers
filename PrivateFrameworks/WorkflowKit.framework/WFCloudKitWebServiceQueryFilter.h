
@interface WFCloudKitWebServiceQueryFilter : NSObject

+ (id)filterWithCombinationOf:(id)arg1 by:(unsigned long long)arg2;
+ (id)filterWithComparisonOf:(id)arg1 toInt:(long long)arg2 by:(unsigned long long)arg3;
+ (id)filterWithComparisonOf:(id)arg1 toString:(id)arg2 by:(unsigned long long)arg3;
+ (id)filterWithComparisonOf:(id)arg1 toStringArray:(id)arg2 by:(unsigned long long)arg3;

- (id)stringRepresentationWithRecordType:(id)arg1;

@end
