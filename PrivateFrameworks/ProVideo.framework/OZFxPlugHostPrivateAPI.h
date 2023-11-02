
@interface OZFxPlugHostPrivateAPI : NSObject <FxHostPrivateAPI, FxRenderModelAPIPrivate, PROAPIObject> {
    struct shared_ptr<OZFxPlugSharedLock> { 
        struct OZFxPlugSharedLock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fxPlugLock;
    NSString * _pluginUUID;
    unsigned long long  _sessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundle:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithIdentifier:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (id)URLForMediaFolder;
- (float)blendingGamma;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)dealloc;
- (bool)giveEffectUIFocus;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)navigateToTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)restartConnection:(id)arg1 forPlugin:(id)arg2 session:(unsigned long long)arg3;

@end
