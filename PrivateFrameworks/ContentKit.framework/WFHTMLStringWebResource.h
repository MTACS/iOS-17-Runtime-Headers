
@interface WFHTMLStringWebResource : WFWebResource {
    NSURL * _baseURL;
    NSString * _htmlString;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *htmlString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (id)baseURL;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)htmlString;
- (id)initWithCoder:(id)arg1;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadInWKWebView:(id)arg1;
- (id)textEncodingName;

@end
