
@interface NTKDArgonServiceXPCWrapper : NSObject <NTKFaceSupportServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedXPCWrapper;

- (void)displayUserNotificationForKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)ingestKeyDescriptor:(id)arg1 withMethod:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)knownKeyDescriptors:(id /* block */)arg1;
- (void)queryForNewFaces:(id /* block */)arg1;
- (void)requestCurrentEnvironment:(id /* block */)arg1;
- (void)requestResetOnNextLaunch:(id /* block */)arg1;
- (void)setCurrentEnvironment:(long long)arg1 completion:(id /* block */)arg2;

@end
