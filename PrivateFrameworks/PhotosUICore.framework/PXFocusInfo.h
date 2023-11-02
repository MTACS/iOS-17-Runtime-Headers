
@interface PXFocusInfo : NSObject {
    NSString * _cornerCurve;
    double  _cornerRadius;
    UIView * _view;
    bool  _wantsInnerBorder;
    bool  _wantsOuterBorder;
}

@property (nonatomic, readonly) NSString *cornerCurve;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) bool wantsInnerBorder;
@property (nonatomic) bool wantsOuterBorder;

+ (id)focusInfoWithView:(id)arg1;
+ (id)focusInfoWithView:(id)arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3;

- (void).cxx_destruct;
- (id)cornerCurve;
- (double)cornerRadius;
- (id)makeHaloEffectForSourceView:(id)arg1;
- (void)setWantsInnerBorder:(bool)arg1;
- (void)setWantsOuterBorder:(bool)arg1;
- (id)view;
- (bool)wantsInnerBorder;
- (bool)wantsOuterBorder;

@end
