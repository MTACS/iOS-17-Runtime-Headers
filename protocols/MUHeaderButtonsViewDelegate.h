
@protocol MUHeaderButtonsViewDelegate <NSObject>

@required

- (void)headerButtonsView:(MUHeaderButtonsView *)arg1 didSelectPrimaryType:(unsigned long long)arg2 withPresentationOptions:(MUPresentationOptions *)arg3;

@optional

- (void)headerButtonsViewWillPresentMenu:(MUHeaderButtonsView *)arg1;

@end
