
@interface ConversationFooterViewDisplayMetrics : NSObject {
    double  _toolbarHeight;
    double  _topToBaseline;
    bool  _usePhoneLandscapeSymbolConfiguration;
}

@property (nonatomic) double toolbarHeight;
@property (nonatomic) double topToBaseline;
@property (nonatomic) bool usePhoneLandscapeSymbolConfiguration;

+ (id)displayMetricsWithSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 interfaceOrientation:(long long)arg2 traitCollection:(id)arg3;

- (void)setToolbarHeight:(double)arg1;
- (void)setTopToBaseline:(double)arg1;
- (void)setUsePhoneLandscapeSymbolConfiguration:(bool)arg1;
- (double)toolbarHeight;
- (double)topToBaseline;
- (bool)usePhoneLandscapeSymbolConfiguration;

@end
