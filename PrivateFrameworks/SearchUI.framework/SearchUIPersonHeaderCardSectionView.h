
@interface SearchUIPersonHeaderCardSectionView : SearchUICardSectionView <CNGroupIdentityHeaderViewControllerDelegate> {
    SearchUIPersonHeaderBoxView * _boxView;
    SearchUIPersonHeaderViewController * _viewController;
    SearchUIPersonHeaderViewController * _viewControllerWithDowntimeButton;
    SearchUIPersonHeaderViewController * _viewControllerWithPayButton;
}

@property (retain) SearchUIPersonHeaderBoxView *boxView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SFPersonHeaderCardSection *section;
@property (readonly) Class superclass;
@property (retain) SearchUIPersonHeaderViewController *viewController;
@property (retain) SearchUIPersonHeaderViewController *viewControllerWithDowntimeButton;
@property (retain) SearchUIPersonHeaderViewController *viewControllerWithPayButton;

+ (id)contactWithFullName:(id)arg1;
+ (int)defaultSeparatorStyleForRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)boxView;
- (id)contact;
- (id)embeddedViewController;
- (void)groupIdentityHeaderViewController:(id)arg1 didPerformActionOfType:(id)arg2 fromDisambiguation:(bool)arg3;
- (void)groupIdentityHeaderViewController:(id)arg1 willPresentDisambiguationUIForActionType:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)sendCommandEngagementFeedbackWithType:(id)arg1 didSelectFromOptionsMenu:(bool)arg2 didDisplayHandleOptions:(bool)arg3;
- (void)setBoxView:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setViewControllerWithDowntimeButton:(id)arg1;
- (void)setViewControllerWithPayButton:(id)arg1;
- (id)setupContentView;
- (void)updateWithContact:(id)arg1 person:(id)arg2;
- (void)updateWithPerson:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)viewController;
- (id)viewControllerWithDowntimeButton;
- (id)viewControllerWithPayButton;

@end
