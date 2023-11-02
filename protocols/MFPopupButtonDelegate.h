
@protocol MFPopupButtonDelegate <NSObject>

@required

- (UIMenu *)menuForPopupButton:(MFPopupButton *)arg1;

@optional

- (void)popupButton:(MFPopupButton *)arg1 didSelectItem:(MFPopupButtonItem *)arg2;
- (void)popupButtonWillDismissMenu:(MFPopupButton *)arg1 animator:(id <UIContextMenuInteractionAnimating>)arg2;
- (void)popupButtonWillPresentMenu:(MFPopupButton *)arg1 animator:(id <UIContextMenuInteractionAnimating>)arg2;

@end
