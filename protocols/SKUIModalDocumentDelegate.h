
@protocol SKUIModalDocumentDelegate <NSObject>

@optional

- (long long)modalDocumentController:(SKUIModalDocumentController *)arg1 barStyleForStackItem:(SKUIDocumentStackItem *)arg2;
- (bool)modalDocumentController:(SKUIModalDocumentController *)arg1 willPushDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)modalDocumentControllerDidFinish:(SKUIModalDocumentController *)arg1;

@end
