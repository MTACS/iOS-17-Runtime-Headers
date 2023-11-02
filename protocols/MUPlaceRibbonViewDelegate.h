
@protocol MUPlaceRibbonViewDelegate <NSObject>

@required

- (void)ribbonView:(MUPlaceRibbonView *)arg1 didTapItemWithViewModel:(MUPlaceRibbonItemViewModel *)arg2 withPresentationOptions:(MUPresentationOptions *)arg3;
- (bool)ribbonView:(MUPlaceRibbonView *)arg1 shouldShowRibbonItem:(MUPlaceRibbonItemViewModel *)arg2;

@end
