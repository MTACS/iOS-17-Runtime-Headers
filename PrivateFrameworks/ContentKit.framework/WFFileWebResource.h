
@interface WFFileWebResource : WFWebResource {
    WFFileRepresentation * _file;
}

@property (nonatomic, readonly) WFFileRepresentation *file;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile:(id)arg1;
- (id)loadInWKWebView:(id)arg1;

@end
