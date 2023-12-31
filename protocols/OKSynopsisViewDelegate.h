
@protocol OKSynopsisViewDelegate <NSObject>

@required

- (void)synopsisView:(OKSynopsisView *)arg1 didSelectItem:(OKPresentationGuideline *)arg2;
- (NSArray *)visibleWidgets;

@optional

- (bool)shouldShowSynopsisView;
- (void)synopsisViewDidBegin:(OKSynopsisView *)arg1;
- (void)synopsisViewDidEnd:(OKSynopsisView *)arg1;
- (void)synopsisViewUpdated:(OKSynopsisView *)arg1 withProgress:(double)arg2;
- (void)synopsisViewWillBegin:(OKSynopsisView *)arg1;

@end
