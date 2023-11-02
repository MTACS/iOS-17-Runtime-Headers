
@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell <UITextViewDelegate> {
    <SFPrivacyReportExplanationTableViewCellDelegate> * _delegate;
    bool  _expanded;
    UITextView * _textLabel;
    bool  _wideLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFPrivacyReportExplanationTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)_toggleExpanded:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isExpanded;
- (void)privacyProxyStateChanged:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
