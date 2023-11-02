
@interface CDRichComplicationCornerView : CDRichComplicationTemplateView <CDRichComplicationCornerPositionable> {
    long long  _fontFallback;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitTestBounds;
    UIBezierPath * _hitTestPath;
    double  _innerComponentRotationInDegree;
    double  _outerComponentRotationInDegree;
    long long  _position;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double innerComponentRotationInDegree;
@property (nonatomic) double outerComponentRotationInDegree;
@property (nonatomic) long long position;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })viewSizeForDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1;
- (void)_createHitTestPathIfNecessary;
- (id)_fontWithSize:(double)arg1 fontWeight:(double)arg2;
- (id)_fontWithSize:(double)arg1 withFontDescriptor:(id)arg2;
- (void)_layoutCurvedLabel:(id)arg1 centerAngleInDegree:(double)arg2 editingRotationInDegree:(double)arg3;
- (void)_layoutView:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2 editingTranslation:(struct CGPoint { double x1; double x2; })arg3 editingRotationInDegree:(double)arg4;
- (void)_transitToHighlightState:(bool)arg1 fraction:(double)arg2;
- (void)_updateColoringLabel:(id)arg1 withFontWeight:(double)arg2;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (id)initWithFontFallback:(long long)arg1;
- (double)innerComponentRotationInDegree;
- (double)outerComponentRotationInDegree;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)position;
- (void)setInnerComponentRotationInDegree:(double)arg1;
- (void)setOuterComponentRotationInDegree:(double)arg1;
- (void)setPosition:(long long)arg1;

@end
