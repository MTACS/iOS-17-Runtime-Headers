
@interface ASCredentialRequestPaneContext : NSObject {
    UIImage * _icon;
    long long  _iconStyle;
    ASCredentialRequestPaneViewController * _paneViewController;
    UIStackView * _stackView;
    long long  _subtitleStyle;
    ASCredentialRequestInfoLabelSubPane * _subtitleSubPane;
    NSString * _title;
    long long  _titleStyle;
}

@property (nonatomic, readonly) ASCredentialRequestPaneViewController *paneViewController;
@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (double)_boldTitle_customSpacingAfterTitle;
- (double)_boldTitle_stackViewTopSpacing;
- (double)_customSpacingAfterIcon;
- (double)_customSpacingAfterSubtitle;
- (double)_customSpacingAfterTitle;
- (double)_stackViewTopSpacing;
- (bool)_useBoldTitleLayout;
- (void)addEmptyViewWithSpacing:(double)arg1;
- (void)addIcon:(id)arg1 iconStyle:(long long)arg2 title:(id)arg3 titleStyle:(long long)arg4 subtitlePane:(id)arg5 subtitleStyle:(long long)arg6 subtitleBottomSpacing:(id)arg7;
- (void)addSubPane:(id)arg1 withCustomSpacingAfter:(double)arg2;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;
- (id)paneViewController;
- (id)stackView;

@end
