
@protocol PKTextInputDebugStateReporting <NSObject>

@required

- (void)reportDebugStateDescription:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*

@optional

- (bool)debugStateCanDisplayDetails;
- (UIViewController *)debugStateDetailViewController;

@end
