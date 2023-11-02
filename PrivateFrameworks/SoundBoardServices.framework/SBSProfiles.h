
@interface SBSProfiles : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSProfilesImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getInstalledProfiles:(id /* block */)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)installProfileData:(id)arg1 completion:(id /* block */)arg2;
- (void)removeProfileByIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
