
@interface AKGrandSlamResponseHandler : NSObject {
    AKAppleIDAuthenticationContext * _context;
}

@property (nonatomic, retain) AKAppleIDAuthenticationContext *context;

- (void).cxx_destruct;
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;
- (void)_revokeDeviceTrust;
- (id)context;
- (void)handleResponseError:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)setContext:(id)arg1;

@end
