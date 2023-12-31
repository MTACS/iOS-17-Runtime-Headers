
@protocol IKJSPlaylist <JSExport>

@required

- (long long)endAction;
- (id)init;
- (IKJSMediaItem *)item:(long long)arg1;
- (unsigned long long)length;
- (IKJSMediaItem *)pop;
- (void)push:(IKJSMediaItem *)arg1;
- (long long)repeatMode;
- (void)setEndAction:(long long)arg1;
- (void)setRepeatMode:(long long)arg1;
- (NSArray *)splice:(long long)arg1 :(long long)arg2 :(JSValue *)arg3;

@end
