
@interface WFWebViewLinkExtractor : NSObject

+ (void)extractLinksFromScriptResult:(id)arg1 withDestinationWidth:(double)arg2 completionHandler:(id /* block */)arg3;
+ (void)extractLinksFromWKWebView:(id)arg1 withDestinationWidth:(double)arg2 completionHandler:(id /* block */)arg3;
+ (id)linkPositionRetrievalJavaScript;

@end
