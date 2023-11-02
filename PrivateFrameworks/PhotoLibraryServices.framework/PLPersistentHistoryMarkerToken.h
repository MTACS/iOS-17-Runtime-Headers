
@interface PLPersistentHistoryMarkerToken : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides> {
    NSPersistentHistoryToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithToken:(id)arg1;
- (id)overrride_changeRequestForFetching;
- (id)overrride_shortDescription;

@end
