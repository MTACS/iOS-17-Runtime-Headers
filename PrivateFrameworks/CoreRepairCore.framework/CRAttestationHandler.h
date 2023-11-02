
@interface CRAttestationHandler : NSObject <CRAttestationProtocol> {
    CRAttestationBaseDeviceHandler * handle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)challengeComponentsWith:(id)arg1 withReply:(id /* block */)arg2;
- (id)getHandlerForDevice;
- (void)getStrongComponentsWithReply:(id /* block */)arg1;

@end
