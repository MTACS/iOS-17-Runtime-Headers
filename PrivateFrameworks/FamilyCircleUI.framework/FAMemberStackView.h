
@interface FAMemberStackView : UIView {
    <FAMemberStackViewDelegate> * _delegate;
    UIView * background;
    UIImage * image;
    UIImageView * imageView;
    FAFamilyMember * member;
    UILabel * nameLabel;
    UIStackView * profileScreenTimeView;
    UILabel * screenTimeLabel;
    UIButton * selectMemberButton;
    UILabel * typeLabel;
    UIStackView * vStack;
}

@property (nonatomic) <FAMemberStackViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)_configureImageViewWithImage:(id)arg1;
- (id)_configureImageWithData:(id)arg1;
- (void)_configureWithImage:(id)arg1;
- (id)delegate;
- (id)init;
- (void)memberCardTapped:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFamilyMemberModel:(id)arg1;
- (void)setupButton;
- (void)setupConstraints;
- (void)setupProfileScreenTimeView;
- (void)setupVStack;

@end
