
@protocol DTTapAuthorizedAPI <DTXAllowedRPC>

@required

- (void)fetchDataNow;
- (void)pause;
- (void)setConfig:(NSDictionary *)arg1;
- (void)start;
- (void)stop;
- (void)unpause;

@end
