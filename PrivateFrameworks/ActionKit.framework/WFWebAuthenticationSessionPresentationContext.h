
@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding> {
    UIWindow * _presentationAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindow *presentationAnchor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPresentationAnchor:(id)arg1;
- (id)presentationAnchor;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;

@end
