
@protocol DSSource <NSObject>

@required

- (void)fetchSharedResourcesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSString *)name;
- (void)stopAllSharingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopSharing:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: <DSSharedResource> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopSharingWithParticipant:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <DSParticipation> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)fetchSharedResourcesWithName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)resourceNames;
- (void)stopSharingResourcesWithName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopSharingWithParticipant:(void *)arg1 forResourceName:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: <DSParticipation> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateParticipantAccessLevelTo:(void *)arg1 onResource:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, <DSSharedResource> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <DSSharedResource> *, NSError *, void*
- (void)updateVisibilityTo:(void *)arg1 onResource:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: long long, <DSSharedResource> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <DSSharedResource> *, NSError *, void*

@end
