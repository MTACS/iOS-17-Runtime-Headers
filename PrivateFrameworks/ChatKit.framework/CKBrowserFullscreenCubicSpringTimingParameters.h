
@interface CKBrowserFullscreenCubicSpringTimingParameters : UISpringTimingParameters {
    UICubicTimingParameters * _springCubicTimingParameters;
}

@property (nonatomic, retain) UICubicTimingParameters *springCubicTimingParameters;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cubicTimingParameters;
- (void)setSpringCubicTimingParameters:(id)arg1;
- (id)springCubicTimingParameters;

@end
