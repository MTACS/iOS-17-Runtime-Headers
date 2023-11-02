
@protocol ICAuxiliaryTextViewHosting <NSObject>

@required

- (UIResponder *)auxiliaryResponder;
- (<ICAuxiliaryStyling> *)auxiliaryStylingController;
- (void)setAuxiliaryResponder:(UIResponder *)arg1;
- (void)setAuxiliaryStylingController:(id <ICAuxiliaryStyling>)arg1;

@end
