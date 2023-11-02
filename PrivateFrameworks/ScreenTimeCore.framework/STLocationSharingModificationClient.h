
@interface STLocationSharingModificationClient : NSObject {
    STManagementState * _managementState;
}

@property (readonly) STManagementState *managementState;

- (void).cxx_destruct;
- (id)init;
- (void)isLocationSharingModificationAllowedForUserID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)managementState;
- (void)setLocationSharingModificationAllowed:(bool)arg1 forUserID:(id)arg2 completionHandler:(id /* block */)arg3;

@end
