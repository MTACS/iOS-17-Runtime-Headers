
@interface _SBRootFolderPageTransitionHandle : NSObject <BSDescriptionProviding, SBRootFolderPageTransition> {
    <BSInvalidatable> * _customIconImageViewControllerCancelTouchesAssertion;
    long long  _destinationPageState;
    SBRootFolderController * _folderController;
    double  _pageTransitionProgress;
    NSString * _reason;
    long long  _sourcePageState;
    bool  _valid;
}

@property (nonatomic, retain) <BSInvalidatable> *customIconImageViewControllerCancelTouchesAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destinationPageState;
@property (nonatomic, readonly) SBRootFolderController *folderController;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pageTransitionProgress;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic) long long sourcePageState;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic) bool valid;

- (void).cxx_destruct;
- (id)customIconImageViewControllerCancelTouchesAssertion;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)destinationPageState;
- (void)endTransitionSuccessfully:(bool)arg1;
- (id)folderController;
- (id)initWithFolderController:(id)arg1 destinationPageState:(long long)arg2 reason:(id)arg3;
- (bool)isValid;
- (double)pageTransitionProgress;
- (id)reason;
- (void)setCustomIconImageViewControllerCancelTouchesAssertion:(id)arg1;
- (void)setDestinationPageState:(long long)arg1;
- (void)setPageTransitionProgress:(double)arg1;
- (void)setSourcePageState:(long long)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)setValid:(bool)arg1;
- (long long)sourcePageState;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
