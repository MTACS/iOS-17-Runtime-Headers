
@interface NUArticleKeyCommandManager : NSObject <NUArticleKeyCommandManager> {
    bool  _hasBeenTraversed;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBeenTraversed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleKey:(id)arg1 flags:(long long)arg2;
- (void)handleKeyCommand:(id)arg1;
- (bool)hasBeenTraversed;
- (id)keyCommandsWithSelector:(SEL)arg1;
- (void)registerScrollView:(id)arg1;
- (id)scrollView;
- (void)setHasBeenTraversed:(bool)arg1;

@end
