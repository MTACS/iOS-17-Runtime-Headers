
@interface WFWidgetConfigurationCardView : UIView <WFWidgetConfigurationCardHeaderViewDelegate> {
    MTStylingProvidingSolidColorView * _backgroundView;
    UIView * _contentView;
    UILayoutGuide * _contentViewGuide;
    <WFWidgetConfigurationCardViewDelegate> * _delegate;
    MTVisualStylingProvider * _fillProvider;
    WFWidgetConfigurationCardHeaderView * _headerView;
    MTVisualStylingProvider * _strokeProvider;
    double  _widgetDescriptionTallScriptCompensatedSpacing;
}

@property (nonatomic, readonly) MTStylingProvidingSolidColorView *backgroundView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UILayoutGuide *contentViewGuide;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWidgetConfigurationCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MTVisualStylingProvider *fillProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWidgetConfigurationCardHeaderView *headerView;
@property (nonatomic, readonly) MTVisualStylingProvider *strokeProvider;
@property (readonly) Class superclass;
@property (nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)contentView;
- (id)contentViewGuide;
- (id)delegate;
- (id)fillProvider;
- (id)headerView;
- (id)initWithRequest:(id)arg1 contentView:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentView:(id)arg1 stretchToFit:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setWidgetDescriptionTallScriptCompensatedSpacing:(double)arg1;
- (id)strokeProvider;
- (void)widgetConfigurationCardHeaderViewDidRequestToClose:(id)arg1;
- (double)widgetDescriptionTallScriptCompensatedSpacing;

@end
