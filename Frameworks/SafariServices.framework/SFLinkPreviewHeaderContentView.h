
@interface SFLinkPreviewHeaderContentView : UIButton {
    <SFLinkPreviewHeaderContentViewDelegate> * _delegate;
    NSString * _domain;
    UILabel * _domainLabel;
    NSArray * _domainWithHidePreviewActionConstraints;
    bool  _previewEnabled;
    UIImageView * _safariIcon;
    NSArray * _safariIconWithShowPreviewActionConstraints;
    UIButton * _togglePreviewButton;
}

@property (nonatomic) <SFLinkPreviewHeaderContentViewDelegate> *delegate;
@property (nonatomic, copy) NSString *domain;
@property (getter=isPreviewEnabled, nonatomic) bool previewEnabled;

- (void).cxx_destruct;
- (void)_togglePreviewButtonPressed;
- (void)_updateDomainWithHidePreviewActionConstraints;
- (void)_updateSafariIconWithShowPreviewActionConstraints;
- (id)delegate;
- (id)domain;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPreviewEnabled;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setPreviewEnabled:(bool)arg1;
- (void)updateConstraints;

@end
