
@interface EKObjectChange : NSObject {
    long long  _changeID;
    int  _changeType;
    EKObjectID * _changedObjectID;
    long long  _sequenceNumber;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) EKObjectID *changedObjectID;
@property (nonatomic, readonly) long long sequenceNumber;

+ (id)CADObjectChangeIDsFromEKObjectChanges:(id)arg1;
+ (void)callClientResultsHandler:(id /* block */)arg1 changesTruncated:(bool)arg2 latestToken:(long long)arg3 changes:(id)arg4;
+ (int)entityType;
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)fetchObjectChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchObjectChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchObjectChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;
+ (id)objectChangeWithProperties:(id)arg1;
+ (void)objectChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)objectChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)objectChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)objectChangesOfType:(id)arg1 inCalendar:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)objectChangesOfType:(id)arg1 inSource:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)objectChangesOfType:(id)arg1 inStore:(id)arg2 resultHandler:(id /* block */)arg3;
+ (long long)objectType;
+ (id /* block */)processFetchResults:(id /* block */)arg1;

- (void).cxx_destruct;
- (long long)changeID;
- (int)changeType;
- (id)changedObjectID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithChangeProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sequenceNumber;
- (id)serializedPropertiesForConsumingChange;

@end
