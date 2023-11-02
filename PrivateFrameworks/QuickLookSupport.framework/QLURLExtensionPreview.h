
@interface QLURLExtensionPreview : QLExtensionPreview {
    NSArray * _additionalURLsAccessed;
    UTType * _contentType;
    QLURLHandler * _urlHandler;
}

@property (retain) NSArray *additionalURLsAccessed;
@property (retain) UTType *contentType;
@property (retain) QLURLHandler *urlHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalURLsAccessed;
- (id)contentType;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 contentType:(id)arg2;
- (id)initWithURLHandler:(id)arg1 contentType:(id)arg2;
- (void)setAdditionalURLsAccessed:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setUrlHandler:(id)arg1;
- (void)updateForExternalResourceAccessWithExtension:(id)arg1 context:(id)arg2;
- (id)urlHandler;

@end
