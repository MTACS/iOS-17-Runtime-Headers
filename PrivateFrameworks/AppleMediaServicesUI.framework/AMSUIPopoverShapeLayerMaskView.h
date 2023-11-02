
@interface AMSUIPopoverShapeLayerMaskView : UIView {
    bool  _disablePathAnimation;
}

@property bool disablePathAnimation;

+ (Class)layerClass;

- (bool)disablePathAnimation;
- (void)setDisablePathAnimation:(bool)arg1;

@end
