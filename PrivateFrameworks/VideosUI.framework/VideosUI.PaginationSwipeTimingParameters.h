
@interface VideosUI.PaginationSwipeTimingParameters : NSObject <UITimingCurveProvider> {
    void swipeAnimationType;
}

@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property (nonatomic, readonly) long long timingCurveType;

- (id)copyWithZone:(void*)arg1;
- (id)cubicTimingParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)springTimingParameters;
- (long long)timingCurveType;

@end
