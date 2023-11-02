
@protocol PRXCardContentProviding <NSObject>

@optional

- (bool)allowsPullToDismiss;
- (long long)cardStyle;
- (void)setTransitioningSize:(bool)arg1;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;

@end
