
@interface SXComponentViewFactory : NSObject <SXComponentViewFactory> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXComponentStyleRendererFactory> * _componentStyleRendererFactory;
    <SXPresentationDelegateProvider> * _presentationDelegateProvider;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (nonatomic, readonly) <SXComponentStyleRendererFactory> *componentStyleRendererFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXPresentationDelegateProvider> *presentationDelegateProvider;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)componentStyleRendererFactory;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (id)presentationDelegateProvider;
- (int)role;
- (id)type;
- (id)viewport;

@end
