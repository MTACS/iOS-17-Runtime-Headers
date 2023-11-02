
@interface FALocationSharingModificationClient : NSObject

- (id)init;
- (void)isLocationSharingModificationAllowedForUserID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLocationSharingModificationAllowed:(bool)arg1 forUserID:(id)arg2 completionHandler:(id /* block */)arg3;

@end
