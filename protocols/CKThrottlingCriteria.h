
@protocol CKThrottlingCriteria <NSObject>

@optional

- (NSString *)applicationBundleIdentifierForContainerAccess;
- (CKContainerID *)containerID;
- (long long)databaseScope;
- (NSString *)functionName;
- (bool)isOperationType:(int)arg1;
- (NSString *)operationGroupName;
- (NSObject<NSFastEnumeration> *)relevantZoneIDs;
- (NSString *)serviceName;

@end
