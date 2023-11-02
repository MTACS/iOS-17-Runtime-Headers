
@protocol CPSTemplateViewControllerDelegate <NSObject>

@required

- (void)templateViewController:(id <CPSBaseTemplateViewController>)arg1 shouldActivateSiriWithDirectActionContext:(SiriDirectActionContext *)arg2;
- (void)templateViewControllerDidDismiss:(id <CPSBaseTemplateViewController>)arg1;
- (void)templateViewControllerDidPop:(id <CPSBaseTemplateViewController>)arg1;

@end
