
@protocol WKFileUploadPanelDelegate <NSObject>

@optional

- (bool)fileUploadPanelDestinationIsManaged:(WKFileUploadPanel *)arg1;
- (void)fileUploadPanelDidDismiss:(WKFileUploadPanel *)arg1;

@end
