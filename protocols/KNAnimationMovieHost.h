
@protocol KNAnimationMovieHost <NSObject>

@required

- (void)applyMovieControl:(long long)arg1;
- (TSDMovieInfo *)movieInfo;
- (KNSlideNode *)movieSlideNode;
- (NSObject<TSKMediaPlayerController> *)playerController;

@end
