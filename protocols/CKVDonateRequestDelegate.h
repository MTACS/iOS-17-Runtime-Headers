
@protocol CKVDonateRequestDelegate

@required

- (void)completeRequest:(CKVDonateRequest *)arg1;
- (CKVDonateRequestValidator *)requestValidator;
- (void)submitRequest:(CKVDonateRequest *)arg1;
- (CKVIndexUpdaterFactory *)updaterFactory;

@end
