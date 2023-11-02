
@interface SLDisambiguationCollectionViewAnimator : UIViewPropertyAnimator <UITimingCurveProvider>

@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property (nonatomic, readonly) long long timingCurveType;

+ (id)init;
+ (id)springAnimation;

- (id)commonInit;
- (id)cubicTimingParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)springTimingParameters;
- (long long)timingCurveType;

@end
