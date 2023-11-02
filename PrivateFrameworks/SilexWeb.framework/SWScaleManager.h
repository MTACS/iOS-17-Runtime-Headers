
@interface SWScaleManager : NSObject <SWScaleManager> {
    double  _scale;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)initWithWebView:(id)arg1 scale:(double)arg2;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)webView;

@end
