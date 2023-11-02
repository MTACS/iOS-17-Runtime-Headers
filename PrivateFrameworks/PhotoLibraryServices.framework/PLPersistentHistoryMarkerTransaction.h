
@interface PLPersistentHistoryMarkerTransaction : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides> {
    NSPersistentHistoryTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTransaction:(id)arg1;
- (id)overrride_changeRequestForFetching;
- (id)overrride_shortDescription;

@end
