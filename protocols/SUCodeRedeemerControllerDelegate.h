
@protocol SUCodeRedeemerControllerDelegate <NSObject>

@required

- (void)codeRedeemerControllerDidCancel;
- (void)codeRedeemerControllerDidEndWithCode:(NSString *)arg1 error:(NSError *)arg2;

@end
