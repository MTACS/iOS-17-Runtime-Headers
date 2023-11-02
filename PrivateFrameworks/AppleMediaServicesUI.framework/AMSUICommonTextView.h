
@interface AMSUICommonTextView : UITextView {
    <AMSUICommonTextViewDelegate> * _ams_delegate;
    bool  _centerText;
}

@property (nonatomic) <AMSUICommonTextViewDelegate> *ams_delegate;
@property (nonatomic) bool centerText;

- (void).cxx_destruct;
- (void)_centerTextIfNeeded;
- (id)ams_delegate;
- (bool)centerText;
- (void)layoutSubviews;
- (void)setAms_delegate:(id)arg1;
- (void)setCenterText:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
