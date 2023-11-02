
@interface CLLocationButton : UIControl <NSSecureCoding> {
    bool  _alphaInsufficient;
    UIColor * _backgroundColor;
    bool  _colorsIllegible;
    double  _cornerRadius;
    double  _fontSize;
    long long  _icon;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
    long long  _label;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSLayoutConstraint * _minimumWidthConstraint;
    <LocationUIProtocol> * _proxy;
    UIColor * _resolvedBackgroundColor;
    UIColor * _resolvedTintColor;
    NSString * _sandboxExtension;
    _UISlotView * _slotView;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) bool alphaInsufficient;
@property (nonatomic, readonly) bool colorsIllegible;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double fontSize;
@property (nonatomic) long long icon;
@property (nonatomic) long long label;
@property (nonatomic, readonly) <LocationUIProtocol> *locationUIProxy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_actionForPreSetTarget;
- (id)_computeLocationButtonTag;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned int)_secureName;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_setupSlotView;
- (void)_yieldSlotViewContentForLayerContextID:(unsigned long long)arg1 slotStyle:(id)arg2 withYieldBlock:(id /* block */)arg3;
- (bool)alphaInsufficient;
- (id)backgroundColor;
- (bool)colorsIllegible;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (double)fontSize;
- (long long)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)label;
- (void)layoutSubviews;
- (id)locationUIProxy;
- (void)markDirty;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setIcon:(long long)arg1;
- (void)setLabel:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColor;

@end
