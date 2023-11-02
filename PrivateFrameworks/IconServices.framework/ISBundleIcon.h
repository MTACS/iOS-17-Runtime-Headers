
@interface ISBundleIcon : ISConcreteIcon {
    NSString * _tag;
    NSString * _tagClass;
    NSString * _type;
    NSURL * _url;
}

@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;
@property (readonly) NSString *type;
@property (readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_aspectRatio;
- (id)_makeAppResourceProvider;
- (id)_makeDocumentResourceProvider;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleURL:(id)arg1;
- (id)initWithBundleURL:(id)arg1 fileExtension:(id)arg2;
- (id)initWithBundleURL:(id)arg1 type:(id)arg2;
- (id)initWithBundleURL:(id)arg1 type:(id)arg2 tag:(id)arg3 tagClass:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)makeResourceProvider;
- (id)tag;
- (id)tagClass;
- (id)type;
- (id)url;

@end
