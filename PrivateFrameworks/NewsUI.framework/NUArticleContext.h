
@interface NUArticleContext : NSObject <NSCopying> {
    SXScrollPosition * _scrollPosition;
    bool  _shouldAutoPlayVideo;
    bool  _shouldDisableTransparentNavigationBar;
}

@property (nonatomic, readonly) SXScrollPosition *scrollPosition;
@property (nonatomic, readonly) bool shouldAutoPlayVideo;
@property (nonatomic, readonly) bool shouldDisableTransparentNavigationBar;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithShouldAutoPlayVideo:(bool)arg1 scrollPosition:(id)arg2 shouldDisableTransparentNavigationBar:(bool)arg3;
- (id)scrollPosition;
- (bool)shouldAutoPlayVideo;
- (bool)shouldDisableTransparentNavigationBar;

@end
