
@interface AAUIProximityAuthController : NSObject {
    AKAppleIDProximityAuthenticationContext * _context;
}

@property (nonatomic, retain) AKAppleIDProximityAuthenticationContext *context;

- (void).cxx_destruct;
- (void)beginAdvertisingWithPresentingViewController:(id)arg1;
- (id)context;
- (void)endAdvertising;
- (void)setContext:(id)arg1;

@end
