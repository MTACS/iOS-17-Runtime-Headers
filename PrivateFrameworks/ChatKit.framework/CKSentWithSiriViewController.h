
@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate> {
    UIView * _contentView;
    UILabel * _contextDescriptionLabel;
    CKConversation * _conversation;
    UILabel * _detailLabel;
    UIImageView * _heroImageView;
    UIScrollView * _scrollView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UILabel *contextDescriptionLabel;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *heroImageView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_titleLabelText;
- (bool)canBecomeFirstResponder;
- (id)contentView;
- (id)contextDescriptionLabel;
- (id)conversation;
- (id)detailLabel;
- (id)heroImageView;
- (id)initWithConversation:(id)arg1;
- (id)inputAccessoryViewController;
- (id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContextDescriptionLabel:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setHeroImageView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
