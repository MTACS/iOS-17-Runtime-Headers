
@protocol NUArticleKeyCommandManager <NSObject>

@required

- (void)handleKey:(NSString *)arg1 flags:(long long)arg2;
- (void)handleKeyCommand:(UIKeyCommand *)arg1;
- (bool)hasBeenTraversed;
- (NSArray *)keyCommandsWithSelector:(SEL)arg1;
- (void)registerScrollView:(UIScrollView *)arg1;

@end
