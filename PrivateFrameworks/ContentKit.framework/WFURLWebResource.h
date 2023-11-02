
@interface WFURLWebResource : WFWebResource

@property (nonatomic, readonly) NSURL *URL;

- (id)initWithURL:(id)arg1;
- (id)loadInWKWebView:(id)arg1;
- (id)request;

@end
