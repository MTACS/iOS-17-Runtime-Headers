
@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate> {
    NSMutableArray * _contentLabels;
    UILabel * _headerLabel;
    NSMutableArray * _marginConstraints;
    OBWelcomeController * _moreInfoController;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBWelcomeController *moreInfoController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeContent;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)moreInfoController;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setMoreInfoController:(id)arg1;
- (void)setNeedsLayout;
- (id)settingsLocString:(id)arg1 table:(id)arg2;
- (id)textView:(id)arg1 primaryActionForTextItem:(id)arg2 defaultAction:(id)arg3;

@end
