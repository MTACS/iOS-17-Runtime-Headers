
@interface SBKSyncResponseData : NSObject {
    NSArray * _conflictedKeys;
    NSArray * _deletedKeys;
    NSMutableDictionary * _responseOpEntiesByKey;
    NSArray * _successfullyDeletedKeys;
    NSArray * _successfullyUpdatedKeys;
    NSString * _syncAnchor;
    SBKSyncTransaction * _transaction;
    NSArray * _updatedKeys;
}

@property (nonatomic, readonly) NSArray *conflictedKeys;
@property (nonatomic, readonly) NSArray *deletedKeys;
@property (nonatomic, retain) NSMutableDictionary *responseOpEntiesByKey;
@property (nonatomic, readonly) NSArray *successfullyDeletedKeys;
@property (nonatomic, readonly) NSArray *successfullyUpdatedKeys;
@property (nonatomic, readonly, copy) NSString *syncAnchor;
@property (nonatomic, readonly) SBKSyncTransaction *transaction;
@property (nonatomic, readonly) NSArray *updatedKeys;

+ (id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;

- (void).cxx_destruct;
- (void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2;
- (id)conflictedKeys;
- (id)deletedKeys;
- (id)description;
- (id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;
- (id)payloadDataForUpdateResponseKey:(id)arg1;
- (id)responseOpEntiesByKey;
- (void)setResponseOpEntiesByKey:(id)arg1;
- (id)successfullyDeletedKeys;
- (id)successfullyUpdatedKeys;
- (id)syncAnchor;
- (id)transaction;
- (id)updatedKeys;

@end
