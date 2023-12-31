
@protocol SXComponentSizerFactory <SXComponentTypeDescribing>

@required

- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutOptions:(SXLayoutOptions *)arg3 DOMObjectProvider:(id <SXDOMObjectProviding>)arg4;

@end
