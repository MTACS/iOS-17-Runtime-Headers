
@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {
    struct ConnectionInfo { 
        NSXPCConnection *mConnection; 
        int mExtUsePermission; 
        bool mLinkedSDKRequiresEntitlement; 
    }  mConnInfo;
    void * mImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearConfigurationInfoCache;
- (void)copyConfigurationInfoFromCache:(id)arg1 reply:(id /* block */)arg2;
- (void)getComponentUserTags:(id)arg1 reply:(id /* block */)arg2;
- (void)getExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(bool)arg2 reply:(id /* block */)arg3;
- (void)getExtensionIcon:(id)arg1 reply:(id /* block */)arg2;
- (void)getInterAppIcon:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithRegistrar:(void*)arg1 connection:(id)arg2;
- (bool)isGenericAppIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)setComponentUserTags:(id)arg1 tags:(id)arg2;
- (void)setExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(bool)arg2 components:(id)arg3 reply:(id /* block */)arg4;
- (void)writeConfigurationInfoToCache:(id)arg1 configurationInfo:(id)arg2;

@end
