
@protocol NEIPSecSASessionDelegate <NSObject>

@required

- (void)blackholeDetectedSA:(NEIPSecSA *)arg1;
- (void)deleteSA:(NEIPSecSA *)arg1;
- (void)expireSA:(NEIPSecSA *)arg1;
- (void)idleTimeoutSA:(NEIPSecSA *)arg1;

@end
