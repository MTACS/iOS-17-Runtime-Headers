
@interface TPKTipContentHintView : TPKContentView {
    void bottomSeparatorView;
}

- (void).cxx_destruct;
- (void)bottomSeperatorNeedsUpdate;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2;
- (id)initWithController:(id)arg1 content:(id)arg2;
- (id)initWithReusableTipView:(id)arg1;
- (void)layoutSubviews;
- (void)resetHostingView;
- (void)updateContentBackgroundColor:(id)arg1;

@end
