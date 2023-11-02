
@interface CRAuthRepairInspector : NSObject

+ (unsigned long long)_getStatus;
+ (bool)checkMismatch:(id)arg1 failureDataList:(id)arg2;
+ (unsigned long long)getStatus;
+ (bool)hasAnyMismatched:(id)arg1 success:(bool*)arg2;
+ (bool)wasRepaired:(bool*)arg1;

@end
