
@protocol MPCPlaybackEngineEventStreamDeferralAssertion <NSObject>

@required

- (void)invalidate;
- (NSString *)reason;

@end
