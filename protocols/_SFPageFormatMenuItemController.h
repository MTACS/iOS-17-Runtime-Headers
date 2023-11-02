
@protocol _SFPageFormatMenuItemController <NSObject>

@required

- (_SFSettingsAlertItem *)alertItem;
- (<_SFPageFormatMenuItemControllerDelegate> *)delegate;
- (void)setDelegate:(id <_SFPageFormatMenuItemControllerDelegate>)arg1;

@end
