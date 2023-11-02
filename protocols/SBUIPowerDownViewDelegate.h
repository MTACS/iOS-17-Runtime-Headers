
@protocol SBUIPowerDownViewDelegate <NSObject>

@required

- (void)powerDownViewAnimateOutCompleted:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewRequestCancel:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewRequestPowerDown:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewWillAnimateIn:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewWillAnimateOut:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)showPowerDownFindMyAlert;
- (void)showPowerDownFindMyAlertWithProceed:(void *)arg1 cancelCompletion:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*

@end
