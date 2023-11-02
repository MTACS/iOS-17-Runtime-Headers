
@protocol CRCodeRedeemerControllerDelegate <NSObject>

@required

- (void)codeRedeemerController:(CRCodeRedeemerController *)arg1 didEndWithInfo:(NSDictionary *)arg2;
- (void)codeRedeemerControllerDidCancel:(CRCodeRedeemerController *)arg1;

@optional

- (void)codeRedeemerControllerDidDisplayMessage:(CRCodeRedeemerController *)arg1;
- (void)codeRedeemerControllerDidFindBox:(CRCodeRedeemerController *)arg1;

@end
