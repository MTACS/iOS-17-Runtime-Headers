
@protocol SiriPresentation <BSInvalidatable>

@required

- (void)dismiss;
- (void)dismissWithOptions:(SiriDismissalOptions *)arg1;
- (void)hasContentAtPoint:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (long long)identifier;
- (void)invalidate;
- (bool)isEnabled;
- (void)setSiriPresentationControllerDelegate:(id <SiriPresentationControllerDelegate>)arg1;
- (<SiriPresentationControllerDelegate> *)siriPresentationControllerDelegate;

@end
