
@interface RUISetupAssistantStyle : RUIStyle {
    RUISetupAssitantLayout * _setupAssistantLayout;
}

@property (nonatomic, retain) RUISetupAssitantLayout *setupAssistantLayout;

- (void).cxx_destruct;
- (void)_applyToFooter:(id)arg1 view:(id)arg2;
- (void)_applyToTitleLabel:(id)arg1;
- (id)_backgroundColor;
- (void)applyToLabel:(id)arg1;
- (void)applyToNavigationBar:(id)arg1;
- (void)applyToObjectModel:(id)arg1;
- (id)barBackgroundImageForUserInterfaceStyle:(long long)arg1;
- (id)init;
- (id)insetGroupedCellBackgroundColor;
- (void)setSetupAssistantLayout:(id)arg1;
- (id)setupAssistantLayout;
- (bool)supportActivityIndicatorInPinView;

@end
