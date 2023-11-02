
@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUIHomeScreenAppIconView *view;

+ (bool)supportsRowModel:(id)arg1;

- (void)deleteIcon:(id)arg1;
- (void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupView;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
