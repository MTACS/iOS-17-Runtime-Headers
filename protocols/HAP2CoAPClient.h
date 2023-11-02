
@protocol HAP2CoAPClient <NSObject>

@required

- (void)alterMaxTransmitAttempts:(unsigned long long)arg1 initialACKTimeout:(double)arg2;
- (void)closeWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)connected;
- (<HAP2CoAPClientDelegate> *)delegate;
- (double)initialACKTimeout;
- (unsigned long long)maxTransmitAttempts;
- (void)openWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendRequestWithMethod:(void *)arg1 path:(void *)arg2 payload:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: unsigned char, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)setDelegate:(id <HAP2CoAPClientDelegate>)arg1;

@end
