
@interface SBUISystemApertureButtonContentProvider : NSObject <SBUISystemApertureContentColorStyling, SBUISystemApertureContentViewProviding> {
    <SBUISystemApertureContentViewContaining> * _contentContainer;
    UIView * _providedView;
}

@property (nonatomic, copy) UIButtonConfiguration *buttonConfiguration;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) <SBUISystemApertureContentViewContaining> *contentContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *providedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_providedView;
- (id)buttonConfiguration;
- (id)contentColor;
- (id)contentContainer;
- (id)initWithButtonConfiguration:(id)arg1 action:(id)arg2;
- (id)initWithDefaultSymbolActionConfigurationWithAction:(id)arg1;
- (id)initWithDefaultTextActionConfigurationWithAction:(id)arg1;
- (id)providedView;
- (void)setButtonConfiguration:(id)arg1;
- (void)setContentColor:(id)arg1;
- (void)setContentContainer:(id)arg1;

@end
