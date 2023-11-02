
@interface WBSFileLockFactoryPOSIX : NSObject <WBSFileLockFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)coordinationLockURL:(id)arg1;
- (id)lockURL:(id)arg1 error:(id*)arg2;

@end
