
@protocol VSAppDocumentControllerDelegate <NSObject>

@optional

- (void)appDocumentController:(VSAppDocumentController *)arg1 didFailToUpdateViewModelWithError:(NSError *)arg2;
- (void)appDocumentController:(VSAppDocumentController *)arg1 didUpdateViewModel:(VSViewModel *)arg2;

@end
