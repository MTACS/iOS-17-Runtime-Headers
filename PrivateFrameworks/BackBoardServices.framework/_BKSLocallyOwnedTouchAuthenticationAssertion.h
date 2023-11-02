
@interface _BKSLocallyOwnedTouchAuthenticationAssertion : NSObject <BSInvalidatable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)invalidate;

@end
