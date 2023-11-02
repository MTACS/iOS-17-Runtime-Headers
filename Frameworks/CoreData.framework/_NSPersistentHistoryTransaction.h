
@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    NSString * _author;
    NSManagedObjectID * _backingObjectID;
    NSString * _bundleID;
    NSArray * _changes;
    NSString * _contextName;
    NSPersistentStoreCoordinator * _coordinator;
    NSString * _processID;
    NSData * _queryGeneration;
    long long  _rowIdentifier;
    NSString * _storeID;
    double  _timestamp;
}

+ (bool)supportsSecureCoding;

- (id)_backingObjectID;
- (id)author;
- (id)bundleID;
- (id)changes;
- (id)contextName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;
- (id)initialQueryGenerationToken;
- (id)objectIDNotification;
- (id)postQueryGenerationToken;
- (id)processID;
- (id)storeID;
- (id)timestamp;
- (id)token;
- (long long)transactionNumber;

@end
