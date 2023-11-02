
@interface MSSetupSession : NSObject {
    MSServiceAccount * _account;
    <MSAuthenticationPresentationContext> * _presentationContext;
    unsigned long long  _testFlags;
    MSSetupViewController * _viewController;
}

@property (nonatomic, readonly) MSServiceAccount *account;
@property (nonatomic) <MSAuthenticationPresentationContext> *presentationContext;
@property (nonatomic, readonly) unsigned long long testFlags;
@property (nonatomic, readonly, retain) MSSetupViewController *viewController;

- (void).cxx_destruct;
- (id)account;
- (id)initWithServiceAccount:(id)arg1;
- (id)initWithServiceAccount:(id)arg1 test:(unsigned long long)arg2;
- (id)presentationContext;
- (void)setPresentationContext:(id)arg1;
- (bool)startWithError:(id*)arg1;
- (unsigned long long)testFlags;
- (id)viewController;

@end
