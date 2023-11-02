
@interface VUIVideoAdvisoryViewLayout : TVViewLayout {
    VUITextLayout * _descriptionLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _descriptionMargin;
    double  _descriptionMaxWidth;
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
    UIColor * _legendBackgroundColor;
    double  _legendCornerRadius;
    VUITextLayout * _legendLayout;
    double  _legendMaxWidth;
    double  _legendNameMinWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _legendNamePadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _legendSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _legendsMargin;
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
    VUITextLayout * _portraitLegendDescriptionLayout;
    VUITextLayout * _portraitLegendLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitLegendSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitLegendsMargin;
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

@property (nonatomic, readonly) VUITextLayout *descriptionLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } descriptionMargin;
@property (nonatomic) double descriptionMaxWidth;
@property (nonatomic, readonly) UIColor *dividerColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dividerMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } dividerSize;
@property (nonatomic, readonly) UIColor *legendBackgroundColor;
@property (nonatomic) double legendCornerRadius;
@property (nonatomic, readonly) VUITextLayout *legendLayout;
@property (nonatomic) double legendMaxWidth;
@property (nonatomic) double legendNameMinWidth;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } legendNamePadding;
@property (nonatomic) struct CGSize { double x1; double x2; } legendSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } legendsMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } logoMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } logoSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitDescriptionMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitDividerMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitDividerSize;
@property (nonatomic, readonly) VUITextLayout *portraitLegendDescriptionLayout;
@property (nonatomic, readonly) VUITextLayout *portraitLegendLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitLegendSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitLegendsMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitLogoMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitLogoSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitMargin;

- (void).cxx_destruct;
- (id)descriptionLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })descriptionMargin;
- (double)descriptionMaxWidth;
- (id)dividerColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dividerMargin;
- (struct CGSize { double x1; double x2; })dividerSize;
- (id)init;
- (id)legendBackgroundColor;
- (double)legendCornerRadius;
- (id)legendLayout;
- (double)legendMaxWidth;
- (double)legendNameMinWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })legendNamePadding;
- (struct CGSize { double x1; double x2; })legendSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })legendsMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })logoMargin;
- (struct CGSize { double x1; double x2; })logoSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitDescriptionMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitDividerMargin;
- (struct CGSize { double x1; double x2; })portraitDividerSize;
- (id)portraitLegendDescriptionLayout;
- (id)portraitLegendLayout;
- (struct CGSize { double x1; double x2; })portraitLegendSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitLegendsMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitLogoMargin;
- (struct CGSize { double x1; double x2; })portraitLogoSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitMargin;
- (void)setDescriptionMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDescriptionMaxWidth:(double)arg1;
- (void)setDividerMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDividerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegendCornerRadius:(double)arg1;
- (void)setLegendMaxWidth:(double)arg1;
- (void)setLegendNameMinWidth:(double)arg1;
- (void)setLegendNamePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegendsMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLogoMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLogoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitDescriptionMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitDividerMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitDividerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitLegendsMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitLogoMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitLogoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
