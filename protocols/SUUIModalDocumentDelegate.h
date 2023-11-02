
@protocol SUUIModalDocumentDelegate <NSObject>

@optional

- (long long)modalDocumentController:(SUUIModalDocumentController *)arg1 barStyleForStackItem:(SUUIDocumentStackItem *)arg2;
- (bool)modalDocumentController:(SUUIModalDocumentController *)arg1 willPushDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)modalDocumentControllerDidFinish:(SUUIModalDocumentController *)arg1;

@end
