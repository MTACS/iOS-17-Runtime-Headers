
@interface SXDataTableComponentViewFactory : SXComponentViewFactory {
    <SXAdIgnorableViewFactory> * _adIgnorableViewFactory;
    <SXComponentActionHandler> * _componentActionHandler;
    <SXComponentController> * _componentController;
    <SXImageViewFactory> * _imageViewFactory;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
}

@property (nonatomic, readonly) <SXAdIgnorableViewFactory> *adIgnorableViewFactory;
@property (nonatomic, readonly) <SXComponentActionHandler> *componentActionHandler;
@property (nonatomic, readonly) <SXComponentController> *componentController;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;

- (void).cxx_destruct;
- (id)adIgnorableViewFactory;
- (id)componentActionHandler;
- (id)componentController;
- (id)componentViewForComponent:(id)arg1;
- (id)imageViewFactory;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 imageViewFactory:(id)arg5 componentActionHandler:(id)arg6 textComponentLayoutHosting:(id)arg7 componentController:(id)arg8 adIgnorableViewFactory:(id)arg9;
- (int)role;
- (id)textComponentLayoutHosting;
- (id)type;

@end
