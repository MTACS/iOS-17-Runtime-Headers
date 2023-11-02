
@interface APMescalSigning : NSObject {
    APMescalSigningRequestor * _requesterObject;
}

@property (nonatomic, readonly) APMescalSigningRequestor *requesterObject;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)requesterObject;
- (id)signatureForData:(id)arg1;
- (void)signatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)signatureForData:(id)arg1 waitTime:(double)arg2 completion:(id /* block */)arg3;

@end
