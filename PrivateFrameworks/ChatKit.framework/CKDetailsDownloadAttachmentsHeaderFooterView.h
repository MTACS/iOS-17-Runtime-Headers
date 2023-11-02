
@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {
    NSString * _buttonText;
    UITextView * _buttonTextView;
    <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> * _delegate;
    UIColor * _downloadButtonTextColor;
    UIImageView * _iCloudImageView;
    bool  _logoHidden;
    NSString * _titleText;
    UIColor * _titleTextColor;
    NSLayoutConstraint * _titleTextTopToLogoConstraint;
    NSLayoutConstraint * _titleTextTopToViewConstraint;
    UITextView * _titleTextView;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, retain) UITextView *buttonTextView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *downloadButtonTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iCloudImageView;
@property (nonatomic) bool logoHidden;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, retain) NSLayoutConstraint *titleTextTopToLogoConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleTextTopToViewConstraint;
@property (nonatomic, retain) UITextView *titleTextView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateiCloudImageViewAppearance;
- (id)buttonText;
- (id)buttonTextView;
- (id)delegate;
- (id)downloadButtonTextColor;
- (void)handleUserTap:(id)arg1;
- (id)iCloudImageView;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (bool)logoHidden;
- (void)setButtonText:(id)arg1;
- (void)setButtonTextView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadButtonTextColor:(id)arg1;
- (void)setICloudImageView:(id)arg1;
- (void)setLogoHidden:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTitleTextTopToLogoConstraint:(id)arg1;
- (void)setTitleTextTopToViewConstraint:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (id)titleText;
- (id)titleTextColor;
- (id)titleTextTopToLogoConstraint;
- (id)titleTextTopToViewConstraint;
- (id)titleTextView;
- (void)traitCollectionDidChange:(id)arg1;

@end
