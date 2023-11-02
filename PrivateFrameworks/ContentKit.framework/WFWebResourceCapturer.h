
@interface WFWebResourceCapturer : NSObject

+ (void)getImageRepresentationForWebResource:(id)arg1 atSize:(struct CGSize { double x1; double x2; })arg2 coercionOptions:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)getPasteboardRepresentationForWebResource:(id)arg1 type:(id)arg2 coercionOptions:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)getPrintFormatterForWebResource:(id)arg1 coercionOptions:(id)arg2 completionHandler:(id /* block */)arg3;

- (void)generatePDFForWebResource:(id)arg1 includeMargin:(bool)arg2 coercionOptions:(id)arg3 completionHandler:(id /* block */)arg4;

@end
