
@protocol GEOTileDBObserver <NSObject>

@optional

- (void)tileDB:(GEOTileDB *)arg1 didExpireSubscriptions:(NSArray *)arg2 forReason:(long long)arg3;
- (void)tileDBDidDeleteExternalResource:(GEOTileDB *)arg1;

@end
