
@interface CNStarkContactDisplayViewController : CNContactContentDisplayViewController <CNPropertyBestIDSValueQueryDelegate> {
    NSArray * _activatedConstraints;
    CNPropertyBestIDSValueQuery * _bestiMessageQuery;
    CNStarkContactNameView * _contactNameView;
    CNCardiMessageEmailGroup * _iMessageEmailGroup;
}

@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic, retain) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (nonatomic, retain) CNStarkContactNameView *contactNameView;
@property (nonatomic, retain) CNCardiMessageEmailGroup *iMessageEmailGroup;

+ (long long)tableViewStyle;

- (void).cxx_destruct;
- (void)_initiateBestiMessagePropertyQuery;
- (id)activatedConstraints;
- (id)applyContactStyle;
- (id)bestiMessageQuery;
- (id)contactNameView;
- (void)dealloc;
- (id)displayHeaderView;
- (bool)hasTableViewHeaderFirstSection;
- (id)iMessageEmailGroup;
- (id)initWithContact:(id)arg1 contactViewConfiguration:(id)arg2;
- (void)initializeTableViewsForHeaderHeight;
- (bool)isGeminiAvailable;
- (bool)isScrollViewControllingHeaderResizeAnimation:(id)arg1;
- (void)loadContactViewControllerViews;
- (void)queryComplete;
- (void)setActivatedConstraints:(id)arg1;
- (void)setBestiMessageQuery:(id)arg1;
- (void)setContactNameView:(id)arg1;
- (void)setIMessageEmailGroup:(id)arg1;
- (void)setupConstraints;
- (struct CGSize { double x1; double x2; })setupTableHeaderView;
- (bool)shouldDisplayAvatarHeaderView;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)title;
- (void)updateFontColors;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
