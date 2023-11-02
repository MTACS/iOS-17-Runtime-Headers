
@interface _UIEditMenuPlatformMetrics : NSObject <_UIVisualStyleProviding> {
    double  _arrowSideRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _arrowSize;
    double  _arrowTipRadius;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _cellBackgroundInsets;
    id /* block */  _cellBackgroundProvider;
    id /* block */  _cellBackgroundUpdater;
    id /* block */  _containerViewConfigurator;
    double  _horizontalMenuCornerRadius;
    double  _horizontalMenuMaximumWidth;
    id /* block */  _menuBackgroundConfigurator;
    UIVisualEffect * _menuBackgroundEffect;
    UIColor * _menuHighlightBackgroundColor;
    UIVisualEffect * _menuHighlightBackgroundEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _menuItemMargins;
    long long  _overrideUserInterfaceStyle;
    UIButtonConfiguration * _pageButtonConfiguration;
    UIVisualEffect * _separatorEffect;
    UIColor * _separatorEffectColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowOpacity;
    double  _shadowRadius;
    bool  _showsSeparatorBetweenItems;
    double  _verticalMenuCornerRadius;
}

@property (nonatomic) double arrowSideRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } arrowSize;
@property (nonatomic) double arrowTipRadius;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } cellBackgroundInsets;
@property (nonatomic, copy) id /* block */ cellBackgroundProvider;
@property (nonatomic, copy) id /* block */ cellBackgroundUpdater;
@property (nonatomic, copy) id /* block */ containerViewConfigurator;
@property (nonatomic) double horizontalMenuCornerRadius;
@property (nonatomic) double horizontalMenuMaximumWidth;
@property (nonatomic, copy) id /* block */ menuBackgroundConfigurator;
@property (nonatomic, copy) UIVisualEffect *menuBackgroundEffect;
@property (nonatomic, copy) UIColor *menuHighlightBackgroundColor;
@property (nonatomic, copy) UIVisualEffect *menuHighlightBackgroundEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } menuItemMargins;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (nonatomic, copy) UIButtonConfiguration *pageButtonConfiguration;
@property (nonatomic, copy) UIVisualEffect *separatorEffect;
@property (nonatomic, copy) UIColor *separatorEffectColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) bool showsSeparatorBetweenItems;
@property (nonatomic) double verticalMenuCornerRadius;

- (void).cxx_destruct;
- (double)arrowSideRadius;
- (struct CGSize { double x1; double x2; })arrowSize;
- (double)arrowTipRadius;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellBackgroundInsets;
- (id /* block */)cellBackgroundProvider;
- (id /* block */)cellBackgroundUpdater;
- (id /* block */)containerViewConfigurator;
- (double)horizontalMenuCornerRadius;
- (double)horizontalMenuMaximumWidth;
- (id)init;
- (id /* block */)menuBackgroundConfigurator;
- (id)menuBackgroundEffect;
- (id)menuHighlightBackgroundColor;
- (id)menuHighlightBackgroundEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })menuItemMargins;
- (long long)overrideUserInterfaceStyle;
- (id)pageButtonConfiguration;
- (id)separatorEffect;
- (id)separatorEffectColor;
- (void)setArrowSideRadius:(double)arg1;
- (void)setArrowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArrowTipRadius:(double)arg1;
- (void)setCellBackgroundInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCellBackgroundProvider:(id /* block */)arg1;
- (void)setCellBackgroundUpdater:(id /* block */)arg1;
- (void)setContainerViewConfigurator:(id /* block */)arg1;
- (void)setHorizontalMenuCornerRadius:(double)arg1;
- (void)setHorizontalMenuMaximumWidth:(double)arg1;
- (void)setMenuBackgroundConfigurator:(id /* block */)arg1;
- (void)setMenuBackgroundEffect:(id)arg1;
- (void)setMenuHighlightBackgroundColor:(id)arg1;
- (void)setMenuHighlightBackgroundEffect:(id)arg1;
- (void)setMenuItemMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setPageButtonConfiguration:(id)arg1;
- (void)setSeparatorEffect:(id)arg1;
- (void)setSeparatorEffectColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShowsSeparatorBetweenItems:(bool)arg1;
- (void)setVerticalMenuCornerRadius:(double)arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (bool)showsSeparatorBetweenItems;
- (double)verticalMenuCornerRadius;

@end
