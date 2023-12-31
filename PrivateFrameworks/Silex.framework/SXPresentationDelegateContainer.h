
@interface SXPresentationDelegateContainer : NSObject <SXPresentationDelegateContainer> {
    <SXPresentationDelegate> * _presentationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)presentationDelegate;
- (void)registerPresentationDelegate:(id)arg1;

@end
