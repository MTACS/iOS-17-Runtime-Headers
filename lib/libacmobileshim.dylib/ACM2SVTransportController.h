
@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol> {
    <ACM2SVTransportControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACM2SVTransportControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancelImageFetching;
- (id)delegate;
- (void)generateAndSendSecCodeWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)getImageWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)loadTrustedDevicesWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)verifySecureCodeWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
