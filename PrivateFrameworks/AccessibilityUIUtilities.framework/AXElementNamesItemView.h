
@interface AXElementNamesItemView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _arrowTipLocation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _availableBounds;
    UIImageView * _backgroundMaskView;
    UIView * _backgroundView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _elementFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _forcedLabelContainerSize;
    bool  _isSpacer;
    UILabel * _label;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _labelContainerFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelContainerSize;
    long long  _labelPosition;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } arrowTipLocation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableBounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } forcedLabelContainerSize;
@property (nonatomic, readonly) bool hasExtendedArrow;
@property (nonatomic) bool isSpacer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelContainerFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } labelContainerSize;
@property (nonatomic) long long labelPosition;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (double)_arrowHeight;
- (bool)_arrowPointsDown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_collisionFrameForArrow;
- (double)_cornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_elementFrameAdjustedForBounds;
- (id)_newBackgroundImage;
- (double)_outlineWidth;
- (bool)_shouldAllowLongArrows;
- (void)_updateFromLabelContainerFrame;
- (void)_updateFromMainProperties;
- (void)_updateLabelContainerSize;
- (bool)_usesArrow;
- (bool)_usesExtendedArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_validateLabelContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })arrowTipLocation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableBounds;
- (bool)collidesWithView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementFrame;
- (struct CGSize { double x1; double x2; })forcedLabelContainerSize;
- (bool)hasExtendedArrow;
- (id)initWithName:(id)arg1 elementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 availableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 styleProvider:(id)arg4 isSpacer:(bool)arg5;
- (bool)isSpacer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelContainerFrame;
- (struct CGSize { double x1; double x2; })labelContainerSize;
- (long long)labelPosition;
- (void)layoutSubviews;
- (id)name;
- (void)setArrowTipLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setForcedLabelContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsSpacer:(bool)arg1;
- (void)setLabelContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLabelPosition:(long long)arg1;

@end
