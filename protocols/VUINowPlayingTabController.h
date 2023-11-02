
@protocol VUINowPlayingTabController <NSObject>

@required

- (NSDictionary *)getNowPlayingTabContextData;
- (double)nowPlayingTabHeight;
- (void)setNowPlayingTabContextData:(NSDictionary *)arg1;
- (void)setNowPlayingTabDelegate:(id <VUINowPlayingTabControllerDelegate>)arg1;
- (void)setPlayerViewSize:(struct CGSize { double x1; double x2; })arg1;

@end
