
@protocol MSPCloudRecord <NSObject>

@required

- (NSDate *)cloudRecordModificationDate;
- (NSString *)cloudRecordName;
- (<CKRecordValue> *)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id <CKRecordValue>)arg1 forKeyedSubscript:(NSString *)arg2;

@end
