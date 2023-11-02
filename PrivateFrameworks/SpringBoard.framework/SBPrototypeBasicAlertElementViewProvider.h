
@interface SBPrototypeBasicAlertElementViewProvider : NSObject <SAAlertBehavior, SAElement, SAUIElementViewProviding> {
    UIView * _leadingView;
    _SBPrototypeBasicAlertElementCompoundView * _minimalCompoundView;
    UIView * _trailingView;
}

@property (nonatomic) <SAAlertHosting> *alertHost;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *detachedMinimalView;
@property (nonatomic, readonly) <SAElement> *element;
@property (nonatomic) <SAElementHosting> *elementHost;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, readonly) UIView *minimalView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *trailingView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)clientIdentifier;
- (id)element;
- (id)elementIdentifier;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)hasAlertBehavior;
- (unsigned long long)layoutAxis;
- (id)leadingView;
- (id)minimalView;
- (void)setLayoutAxis:(unsigned long long)arg1;
- (id)trailingView;
- (id)viewProvider;

@end
