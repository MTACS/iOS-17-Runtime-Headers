
@interface ICQInternetPrivacySheet : UIViewController {
    UILabel * _bodyLabel;
    NSString * _bodyText;
    NSString * _headerText;
    UILabel * _heaerLabel;
    UIImageView * _iconView;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
    ICQInternetPrivacyViewModel * _viewModel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, retain) UILabel *heaerLabel;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic) ICQInternetPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (bool)_deviceIsiPad;
- (void)addBodyText;
- (void)addHeaderIcon;
- (void)addHeaderText;
- (id)bodyLabel;
- (id)bodyText;
- (id)createTextViewWithText:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)headerText;
- (id)heaerLabel;
- (id)iconView;
- (id)initWithIdentifier:(id)arg1 viewModel:(id)arg2;
- (id)scrollView;
- (void)setBodyLabel:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaerLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTextForIdentifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setupScrollView;
- (void)setupStack;
- (void)setupUI;
- (id)stackView;
- (void)viewDidLoad;
- (id)viewModel;

@end
