
@interface CNContactSuggestionViewController : UITableViewController {
    CNPropertySuggestionAction * _action;
    UIButton * _addToContactButton;
    NSLayoutConstraint * _addToContactLeadingMargin;
    NSLayoutConstraint * _addToContactTrailingMargin;
    UILabel * _contentLabel;
    <CNContactSuggestionViewControllerDataSource> * _dataSource;
    UILabel * _dateLabel;
    NSLayoutConstraint * _dateTrailingMargin;
    NSLayoutConstraint * _fromLeadingMargin;
    UIButton * _ignoreButton;
    NSLayoutConstraint * _ignoreLeadingMargin;
    NSLayoutConstraint * _ignoreTrailingMargin;
    CNPropertyCell * _propertyCell;
    UILabel * _subjectLabel;
    UILabel * _withLabel;
}

@property (nonatomic, retain) CNPropertySuggestionAction *action;
@property (nonatomic, retain) UIButton *addToContactButton;
@property (nonatomic, retain) NSLayoutConstraint *addToContactLeadingMargin;
@property (nonatomic, retain) NSLayoutConstraint *addToContactTrailingMargin;
@property (nonatomic, retain) UILabel *contentLabel;
@property (nonatomic, retain) <CNContactSuggestionViewControllerDataSource> *dataSource;
@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, retain) NSLayoutConstraint *dateTrailingMargin;
@property (nonatomic, retain) NSLayoutConstraint *fromLeadingMargin;
@property (nonatomic, retain) UIButton *ignoreButton;
@property (nonatomic, retain) NSLayoutConstraint *ignoreLeadingMargin;
@property (nonatomic, retain) NSLayoutConstraint *ignoreTrailingMargin;
@property (nonatomic, retain) CNPropertyCell *propertyCell;
@property (nonatomic, retain) UILabel *subjectLabel;
@property (nonatomic, retain) UILabel *withLabel;

+ (id)viewControllerWithDataSource:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (void)addToContact:(id)arg1;
- (id)addToContactButton;
- (id)addToContactLeadingMargin;
- (id)addToContactTrailingMargin;
- (id)alertMessageForIgnoreContactDetail;
- (id)contentLabel;
- (id)dataSource;
- (id)dateLabel;
- (id)dateTrailingMargin;
- (id)fromLeadingMargin;
- (void)ignore:(id)arg1;
- (id)ignoreButton;
- (id)ignoreLeadingMargin;
- (id)ignoreTrailingMargin;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)propertyCell;
- (void)setAction:(id)arg1;
- (void)setAddToContactButton:(id)arg1;
- (void)setAddToContactLeadingMargin:(id)arg1;
- (void)setAddToContactTrailingMargin:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDateTrailingMargin:(id)arg1;
- (void)setFromLeadingMargin:(id)arg1;
- (void)setIgnoreButton:(id)arg1;
- (void)setIgnoreLeadingMargin:(id)arg1;
- (void)setIgnoreTrailingMargin:(id)arg1;
- (void)setPropertyCell:(id)arg1;
- (void)setSubjectLabel:(id)arg1;
- (void)setWithLabel:(id)arg1;
- (bool)shouldShowAddRejectActions;
- (bool)shouldShowPreview;
- (void)showSource:(id)arg1;
- (id)subjectLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForIgnoreContactDetail;
- (void)updatePreview;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)withLabel;

@end
