
@protocol ACC2SVTransportControllerProtocol <NSObject>

@required

- (void)generateAndSendSecCodeWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <ACCAuthContextProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)loadTrustedDevicesWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <ACCAuthContextProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)verifySecureCodeWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <ACCAuthContextProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@optional

- (void)cancelImageFetching;
- (void)getImageWithURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)validateServiceTicketWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <ACCAuthContextProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)verifyRecoveryKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <ACCAuthContextProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
