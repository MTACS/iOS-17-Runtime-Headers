
@protocol INPlayMediaIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSDictionary *)nowPlayingInfo;
- (void)setNowPlayingInfo:(NSDictionary *)arg1;

@end
