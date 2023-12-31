
@protocol SUActivityDelegate <NSObject>

@optional

- (bool)activity:(SUActivity *)arg1 canPerformWithActivityItems:(NSArray *)arg2;
- (void)activity:(SUActivity *)arg1 prepareWithActivityItems:(NSArray *)arg2;
- (void)performActionForActivity:(SUActivity *)arg1;

@end
