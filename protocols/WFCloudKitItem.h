
@protocol WFCloudKitItem <NSObject>

@required

+ (NSDictionary *)properties;
+ (NSString *)recordType;

- (CKRecordID *)identifier;
- (id)init;

@optional

- (id)ensureFileAssets;
- (NSData *)recordSystemFieldsData;
- (unsigned long long)referenceActionForKey:(NSString *)arg1;
- (void)setCreatedAt:(NSDate *)arg1 modifiedAt:(NSDate *)arg2 createdBy:(NSString *)arg3;
- (void)setRecordSystemFieldsData:(NSData *)arg1;

@end
