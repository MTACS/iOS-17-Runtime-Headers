
@interface SXContext : NSObject {
    SXDocumentController * _documentController;
    <SXHost> * _host;
    NSString * _identifier;
    <SXResourceDataSource> * _resourceDataSource;
    <SXTextContentProvider> * _textContentProvider;
}

@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic, readonly) <SXTextContentProvider> *textContentProvider;

+ (void)prewarm;

- (void).cxx_destruct;
- (id)documentController;
- (id)host;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 shareURL:(id)arg2 JSONData:(id)arg3 resourceDataSource:(id)arg4 host:(id)arg5 error:(id*)arg6;
- (id)resourceDataSource;
- (id)textContentProvider;

@end
