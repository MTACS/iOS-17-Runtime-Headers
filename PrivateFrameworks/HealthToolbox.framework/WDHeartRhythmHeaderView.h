
@interface WDHeartRhythmHeaderView : UITableViewHeaderFooterView <UITextViewDelegate> {
    NSLayoutConstraint * _bodyFirstBaslineToTitleLastBaslineConstraint;
    NSString * _bodyText;
    UITextView * _bodyTextView;
    NSURL * _bodyURL;
    NSString * _bodyURLText;
    NSLayoutConstraint * _bottomMarginToBodyLastBaselineConstraint;
    NSLayoutConstraint * _titleFirstBaselineToTopMarginConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *bodyFirstBaslineToTitleLastBaslineConstraint;
@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic, readonly) NSAttributedString *bodyTextAttributedString;
@property (nonatomic, retain) UITextView *bodyTextView;
@property (nonatomic, copy) NSURL *bodyURL;
@property (nonatomic, readonly) NSAttributedString *bodyURLAttributedString;
@property (nonatomic, copy) NSString *bodyURLText;
@property (nonatomic, retain) NSLayoutConstraint *bottomMarginToBodyLastBaselineConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *titleFirstBaselineToTopMarginConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)bodyFirstBaslineToTitleLastBaslineConstraint;
- (id)bodyText;
- (id)bodyTextAttributedString;
- (id)bodyTextView;
- (id)bodyURL;
- (id)bodyURLAttributedString;
- (id)bodyURLText;
- (id)bottomMarginToBodyLastBaselineConstraint;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setBodyFirstBaslineToTitleLastBaslineConstraint:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyText:(id)arg1 URLText:(id)arg2 URL:(id)arg3;
- (void)setBodyTextView:(id)arg1;
- (void)setBodyURL:(id)arg1;
- (void)setBodyURLText:(id)arg1;
- (void)setBottomMarginToBodyLastBaselineConstraint:(id)arg1;
- (void)setTitleFirstBaselineToTopMarginConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUpUI;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleFirstBaselineToTopMarginConstraint;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBodyTextView;
- (void)updateConstraintConstants;

@end
