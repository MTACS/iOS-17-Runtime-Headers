
@interface DCAppAttestService : NSObject

@property (getter=isSupported, readonly) bool supported;

+ (id)sharedService;

- (bool)_isSupportedReturningError:(id*)arg1;
- (id)_loadAppUUID;
- (id)_rewrapAsDCError:(id)arg1;
- (void)_saveAppUUID:(id)arg1;
- (void)attestKey:(id)arg1 clientDataHash:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateAssertion:(id)arg1 clientDataHash:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateKeyWithCompletionHandler:(id /* block */)arg1;
- (bool)isSupported;

@end
