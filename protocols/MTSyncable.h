
@protocol MTSyncable <MTSyncableObject>

@required

- (NSDate *)syncDate;
- (NSString *)syncIdentifier;
- (unsigned long long)syncType;
- (float)syncVersion;

@end
