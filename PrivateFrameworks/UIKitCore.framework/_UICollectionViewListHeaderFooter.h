
@interface _UICollectionViewListHeaderFooter : UICollectionReusableView {
    id /* block */  _backgroundViewConfigurationProvider;
    <UITableConstants> * _constants;
    UIView * _contentView;
    Class  _contentViewConfigurationClass;
    id /* block */  _contentViewConfigurationProvider;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentViewInsets;
    struct { 
        unsigned int style : 3; 
        unsigned int needsConfigurationStateUpdate : 1; 
        unsigned int hasCustomBackgroundColor : 1; 
        unsigned int hasCustomBackgroundViewConfigurationProvider : 1; 
        unsigned int hasCustomBackgroundViewConfiguration : 1; 
        unsigned int automaticallyUpdatesBackgroundViewConfiguration : 1; 
        unsigned int automaticallyUpdatesContentViewConfiguration : 1; 
    }  _headerFooterFlags;
    _UISystemBackgroundView * _systemBackgroundView;
}

@property (getter=_automaticallyUpdatesBackgroundViewConfiguration, setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:, nonatomic) bool _automaticallyUpdatesBackgroundViewConfiguration;
@property (getter=_automaticallyUpdatesContentViewConfiguration, setter=_setAutomaticallyUpdatesContentViewConfiguration:, nonatomic) bool _automaticallyUpdatesContentViewConfiguration;
@property (getter=_backgroundViewConfiguration, setter=_setBackgroundViewConfiguration:, nonatomic, copy) _UIBackgroundViewConfiguration *_backgroundViewConfiguration;
@property (getter=_backgroundViewConfigurationProvider, setter=_setBackgroundViewConfigurationProvider:, nonatomic, copy) id /* block */ _backgroundViewConfigurationProvider;
@property (getter=_contentViewConfiguration, setter=_setContentViewConfiguration:, nonatomic, copy) <_UIContentViewConfiguration> *_contentViewConfiguration;
@property (getter=_contentViewConfigurationProvider, setter=_setContentViewConfigurationProvider:, nonatomic, copy) id /* block */ _contentViewConfigurationProvider;
@property (nonatomic, readonly) unsigned long long _viewConfigurationState;
@property (getter=_constants, nonatomic, readonly) <UITableConstants> *constants;
@property (nonatomic, retain) UIView *contentView;
@property (getter=_contentViewInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentViewInsets;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_applyBackgroundViewConfiguration:(id)arg1;
- (bool)_automaticallyUpdatesBackgroundViewConfiguration;
- (bool)_automaticallyUpdatesContentViewConfiguration;
- (id)_backgroundViewConfiguration;
- (id /* block */)_backgroundViewConfigurationProvider;
- (id)_constants;
- (struct CGSize { double x1; double x2; })_contentTargetSizeForTargetSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 forUseWithSizeThatFits:(bool)arg4;
- (id)_contentViewConfiguration;
- (id /* block */)_contentViewConfigurationProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInsets;
- (id /* block */)_defaultBackgroundViewConfigurationProvider;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_layoutContentView;
- (void)_layoutSystemBackgroundView;
- (void)_performConfigurationStateUpdate;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetBackgroundColor;
- (void)_resetBackgroundViewConfiguration;
- (void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(bool)arg1;
- (void)_setAutomaticallyUpdatesContentViewConfiguration:(bool)arg1;
- (void)_setBackgroundViewConfiguration:(id)arg1;
- (void)_setBackgroundViewConfigurationProvider:(id /* block */)arg1;
- (void)_setContentViewConfiguration:(id)arg1;
- (void)_setContentViewConfigurationProvider:(id /* block */)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setNeedsConfigurationStateUpdate;
- (long long)_styleFromLayoutAttributes:(id)arg1;
- (void)_updateBackgroundViewConfigurationForState:(unsigned long long)arg1;
- (void)_updateConstants;
- (void)_updateContentViewConfigurationForState:(unsigned long long)arg1;
- (void)_updateDefaultBackgroundAppearance;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (unsigned long long)_viewConfigurationState;
- (id)contentView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end
