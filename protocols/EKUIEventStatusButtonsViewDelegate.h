
@protocol EKUIEventStatusButtonsViewDelegate <NSObject>

@required

- (void)eventStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 calculatedFontSizeToFit:(double)arg2;
- (void)eventStatusButtonsView:(void *)arg1 didSelectAction:(void *)arg2 appliesToAll:(void *)arg3 ifCancelled:(void *)arg4; // needs 4 arg types, found 8: EKUIEventStatusButtonsView *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (UIFont *)eventStatusButtonsViewButtonFont:(EKUIEventStatusButtonsView *)arg1;
- (double)eventStatusButtonsViewButtonFontSize:(EKUIEventStatusButtonsView *)arg1;
- (void)statusButtonsDidLayout;

@end
