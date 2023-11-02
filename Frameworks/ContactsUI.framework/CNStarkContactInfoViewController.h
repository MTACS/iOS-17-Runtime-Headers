
@interface CNStarkContactInfoViewController : UIViewController <CNUIGeminiDataSourceDelegate> {
    CNContact * _contact;
    CNContactGeminiView * _contactGeminiView;
    NSLayoutYAxisAnchor * _firstBaselineAnchor;
    CNUIGeminiDataSource * _geminiDataSource;
    CNGeminiResult * _geminiResult;
    NSArray * _layoutConstraints;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, retain) CNContactGeminiView *contactGeminiView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, retain) CNUIGeminiDataSource *geminiDataSource;
@property (nonatomic, retain) CNGeminiResult *geminiResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, readonly) UILabel *primaryLabel;
@property (nonatomic, readonly) UILabel *secondaryLabel;
@property (nonatomic, readonly) UIStackView *stackView;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)contact;
- (id)contactGeminiView;
- (id)firstBaselineAnchor;
- (id)geminiDataSource;
- (void)geminiDataSourceDidUpdate:(id)arg1;
- (id)geminiResult;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)layoutConstraints;
- (id)primaryLabel;
- (void)resetLayoutConstraints;
- (id)secondaryLabel;
- (void)setContactGeminiView:(id)arg1;
- (void)setGeminiDataSource:(id)arg1;
- (void)setGeminiResult:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (bool)shouldShowGemini;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)viewDidLoad;

@end
