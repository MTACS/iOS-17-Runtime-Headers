
@interface AKAppleIDPasskeyController : NSObject <AAFXPCSessionDelegate> {
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appleIDPasskeyStatusWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithXPCSession:(id)arg1;
- (id)remoteService;
- (void)remoteServiceDidInterrupt;
- (void)remoteServiceDidInvalidate;
- (void)setRemoteService:(id)arg1;
- (void)setupAppleIDPasskeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)unenrollAppleIDPasskeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyAppleIDPasskeyWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
