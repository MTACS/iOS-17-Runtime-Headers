
@protocol PSPINEntryViewDelegate <NSObject>

@required

- (void)pinView:(id <PINEntryView>)arg1 pinEntered:(NSString *)arg2;
- (void)pinView:(id <PINEntryView>)arg1 pinValueChanged:(NSString *)arg2;

@end
