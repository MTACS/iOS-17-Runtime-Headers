
@interface PXPhotosGridPlaceholderStatusController : NSObject {
    PXCPLStatusController * _cplStatusController;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    NSAttributedString * _fallbackAttributedMessage;
    NSString * _fallbackTitle;
    bool  _presentCPLStatus;
    PXStatusController * _statusController;
}

@property (nonatomic, readonly) PXStatusController *statusController;

- (void).cxx_destruct;
- (id)init;
- (id)initForPresentingCPLStatus:(bool)arg1 fallbackTitle:(id)arg2 fallbackAttributedMessage:(id)arg3;
- (id)statusController;

@end
