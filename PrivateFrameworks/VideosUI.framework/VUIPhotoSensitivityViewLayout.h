
@interface VUIPhotoSensitivityViewLayout : TVViewLayout {
    double  _descriptionCornerRadius;
    VUITextLayout * _descriptionLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _descriptionMargin;
    double  _descriptionWidth;
    UIColor * _dividerColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _dividerMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _dividerSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _logoMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _logoSize;
    VUITextLayout * _portraitDescriptionLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitDescriptionMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitDividerMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitDividerSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitLogoMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitLogoSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitMargin;
}

@property (nonatomic) double descriptionCornerRadius;
@property (nonatomic, readonly) VUITextLayout *descriptionLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } descriptionMargin;
@property (nonatomic) double descriptionWidth;
@property (nonatomic, readonly) UIColor *dividerColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dividerMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } dividerSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } logoMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } logoSize;
@property (nonatomic, readonly) VUITextLayout *portraitDescriptionLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitDescriptionMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitDividerMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitDividerSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitLogoMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitLogoSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitMargin;

- (void).cxx_destruct;
- (double)descriptionCornerRadius;
- (id)descriptionLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })descriptionMargin;
- (double)descriptionWidth;
- (id)dividerColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dividerMargin;
- (struct CGSize { double x1; double x2; })dividerSize;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })logoMargin;
- (struct CGSize { double x1; double x2; })logoSize;
- (id)portraitDescriptionLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitDescriptionMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitDividerMargin;
- (struct CGSize { double x1; double x2; })portraitDividerSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitLogoMargin;
- (struct CGSize { double x1; double x2; })portraitLogoSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitMargin;
- (void)setDescriptionCornerRadius:(double)arg1;
- (void)setDescriptionMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDescriptionWidth:(double)arg1;
- (void)setDividerMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDividerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogoMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLogoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitDescriptionMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitDividerMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitDividerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitLogoMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitLogoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
