
@interface PXCPLStatusController : NSObject <PXChangeObserver> {
    id /* block */  _fallbackAction;
    NSString * _fallbackActionTitle;
    NSAttributedString * _fallbackAttributedMessage;
    NSString * _fallbackMessage;
    NSString * _fallbackTitle;
    PXCPLUIStatusProvider * _statusProvider;
    PXStatusViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ fallbackAction;
@property (nonatomic, copy) NSString *fallbackActionTitle;
@property (nonatomic, copy) NSAttributedString *fallbackAttributedMessage;
@property (nonatomic, copy) NSString *fallbackMessage;
@property (nonatomic, copy) NSString *fallbackTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCPLUIStatusProvider *statusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_statusProviderDidChange;
- (id /* block */)fallbackAction;
- (id)fallbackActionTitle;
- (id)fallbackAttributedMessage;
- (id)fallbackMessage;
- (id)fallbackTitle;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setFallbackAction:(id /* block */)arg1;
- (void)setFallbackActionTitle:(id)arg1;
- (void)setFallbackAttributedMessage:(id)arg1;
- (void)setFallbackMessage:(id)arg1;
- (void)setFallbackTitle:(id)arg1;
- (void)setStatusProvider:(id)arg1;
- (id)statusProvider;

@end
