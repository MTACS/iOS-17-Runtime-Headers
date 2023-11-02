
@interface VideosUI.TimingCurveParameter : _TtCs12_SwiftObject <UITimingCurveProvider> {
    void cubicTimingParameters;
    void springTimingParameters;
    void timingCurveType;
}

@property (nonatomic, retain) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, retain) UISpringTimingParameters *springTimingParameters;
@property (nonatomic) long long timingCurveType;

- (id)copyWithZone:(void*)arg1;
- (id)cubicTimingParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCubicTimingParameters:(id)arg1;
- (void)setSpringTimingParameters:(id)arg1;
- (void)setTimingCurveType:(long long)arg1;
- (id)springTimingParameters;
- (long long)timingCurveType;

@end
