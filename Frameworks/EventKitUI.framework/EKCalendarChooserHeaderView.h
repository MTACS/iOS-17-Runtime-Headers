
@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {
    EKCalendarChooserDefaultImpl * _chooser;
    NSArray * _commonConstraints;
    NSArray * _commonLargeConstraints;
    NSArray * _commonNormalConstraints;
    CUIKGroupInfo * _group;
    UILabel * _primaryLabel;
    NSArray * _primaryLabelWithShowAllButtonLargeConstraints;
    NSArray * _primaryLabelWithShowAllButtonNormalConstraints;
    NSArray * _primaryLabelWithoutShowAllButtonLargeConstraints;
    NSArray * _primaryLabelWithoutShowAllButtonNormalConstraints;
    EKGroupInfoButton * _showAllButton;
    UIActivityIndicatorView * _spinner;
    bool  _stacked;
}

@property (nonatomic) EKCalendarChooserDefaultImpl *chooser;
@property (nonatomic, retain) CUIKGroupInfo *group;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) EKGroupInfoButton *showAllButton;
@property (nonatomic) bool showAllButtonHidden;

- (void).cxx_destruct;
- (void)_activateConstraints;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_createConstraints;
- (void)_eventStoreChanged;
- (void)_groupShowAllButtonTapped:(id)arg1;
- (id)chooser;
- (id)group;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutMarginsDidChange;
- (id)primaryLabel;
- (void)setChooser:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setShowAllButton:(id)arg1;
- (void)setShowAllButtonHidden:(bool)arg1;
- (id)showAllButton;
- (bool)showAllButtonHidden;
- (void)tintColorDidChange;
- (void)updateSpinner;

@end
