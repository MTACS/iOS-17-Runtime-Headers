
@interface NDOSupportAppTableViewCell : PSTableCell <ASCLockupViewDelegate> {
    ASCLockupView * _lockupView;
    <ASCOffer> * _originalAppOffer;
    NSString * _supportAppURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASCLockupView *lockupView;
@property (readonly) Class superclass;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setupAppSuportCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)lockupView;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)lockupViewDidBeginRequest:(id)arg1;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (void)openButtonAction;
- (id)parentViewController;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)setLockupView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
