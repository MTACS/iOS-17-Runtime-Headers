
@interface HomeKitCore.MockNSPersistentHistoryChange : NSPersistentHistoryChange {
    void mockChangeID;
    void mockChangeType;
    void mockChangedObjectID;
    void mockTombstone;
    void mockUpdatedProperties;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) NSManagedObjectID *changedObjectID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *tombstone;
@property (nonatomic, readonly) NSSet *updatedProperties;

- (void).cxx_destruct;
- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (id)description;
- (id)init;
- (id)tombstone;
- (id)updatedProperties;

@end
