
@interface SUSSoftwareUpdateUpdateOptionsCell : PSTableCell <UIContextMenuInteractionDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    long long  _activityIndicatorDisplayStyle;
    UIButton * _primaryButton;
    id /* block */  _primaryButtonAction;
    id /* block */  _primaryButtonLongTapAction;
    UIButton * _secondaryButton;
    id /* block */  _secondaryButtonAction;
    UIContextMenuInteraction * _secondaryButtonContextMenuInteraction;
    UIMenu * _secondaryButtonMenu;
    NSLayoutConstraint * _stackViewBottomAnchor;
    NSLayoutConstraint * _stackViewTopAnchor;
}

@property (nonatomic) long long activityIndicatorDisplayStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPrimaryButtonEnabled, nonatomic) bool primaryButtonEnabled;
@property (getter=isPrimaryButtonHidden, nonatomic) bool primaryButtonHidden;
@property (nonatomic, retain) NSString *primaryButtonText;
@property (getter=isSecondaryButtonEnabled, nonatomic) bool secondaryButtonEnabled;
@property (getter=isSecondaryButtonHidden, nonatomic) bool secondaryButtonHidden;
@property (nonatomic, retain) NSString *secondaryButtonText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActivityIndicatorFor:(id)arg1;
- (id)_configurePrimaryButton;
- (id)_configureSecondaryButton;
- (void)_configureStackViewMargin;
- (void)_primaryButtonLongTapped:(id)arg1;
- (void)_setupView;
- (long long)activityIndicatorDisplayStyle;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isPrimaryButtonEnabled;
- (bool)isPrimaryButtonHidden;
- (bool)isSecondaryButtonEnabled;
- (bool)isSecondaryButtonHidden;
- (id)primaryButtonText;
- (id)secondaryButtonText;
- (void)setActivityIndicatorDisplayStyle:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setPrimaryButtonActionHandler:(id /* block */)arg1;
- (void)setPrimaryButtonEnabled:(bool)arg1;
- (void)setPrimaryButtonHidden:(bool)arg1;
- (void)setPrimaryButtonLongTapActionHandler:(id /* block */)arg1;
- (void)setPrimaryButtonText:(id)arg1;
- (void)setSecondaryButtonActionHandler:(id /* block */)arg1;
- (void)setSecondaryButtonEnabled:(bool)arg1;
- (void)setSecondaryButtonHidden:(bool)arg1;
- (void)setSecondaryButtonMenu:(id)arg1;
- (void)setSecondaryButtonText:(id)arg1;

@end
