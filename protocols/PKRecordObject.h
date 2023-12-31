
@protocol PKRecordObject <NSObject>

@required

+ (NSString *)recordNamePrefix;
+ (NSString *)recordType;

- (void)encodeWithRecord:(CKRecord *)arg1;
- (id)initWithRecord:(CKRecord *)arg1;

@end
