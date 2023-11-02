
@interface SXContainerComponentViewFactory : SXComponentViewFactory {
    <SXMediaSharingPolicyProvider> * _mediaSharingPolicyProvider;
}

@property (nonatomic, readonly) <SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5;
- (id)mediaSharingPolicyProvider;
- (int)role;
- (id)type;

@end
