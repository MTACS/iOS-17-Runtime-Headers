
@protocol MTSyncableObject <NSObject>

@optional

- (bool)conflicts:(id <MTSyncableObject>)arg1;
- (<MTSyncableObject> *)merge:(id <MTSyncableObject>)arg1;
- (<MTSyncableObject> *)preferred:(id <MTSyncableObject>)arg1;
- (NSDate *)syncDate;
- (NSString *)syncIdentifier;

@end
