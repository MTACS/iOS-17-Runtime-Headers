
@interface ATGrappaSignatureProvider : ATSignatureProvider {
    ATGrappaSession * _grappaSession;
    ATDeviceSettings * _settings;
}

- (void).cxx_destruct;
- (id)createSignature:(id*)arg1 forData:(id)arg2;
- (id)initWithGrappaSession:(id)arg1;
- (id)verifySignature:(id)arg1 forData:(id)arg2;

@end
