
@interface QLPreviewConverterParts : QLPreviewParts {
    NSURLConnection * _connection;
    void * _convertFunction;
    NSData * _data;
    id  _delegate;
    NSString * _fileName;
    long long  _pageCount;
    float  _pageHeight;
    float  _pageWidth;
    NSString * _password;
    bool  _progressive;
    bool  _shouldRemoveURLAfterGeneration;
    NSURL * _url;
    NSString * _uti;
    bool  cancelled;
    bool  computed;
    NSThread * delegateCallbackThread;
    bool  htmlErrorDisabled;
    NSError * mainError;
    NSURLResponse * previewResponse;
}

@property (nonatomic, readonly) NSSet *attachmentURLs;
@property (getter=isCancelled, readonly) bool cancelled;
@property (getter=isComputed, readonly) bool computed;
@property (nonatomic, retain) NSURLConnection *connection;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) id delegate;
@property (nonatomic, retain) NSString *fileName;
@property bool htmlErrorDisabled;
@property (readonly) long long pageCount;
@property (readonly) float pageHeight;
@property (readonly) float pageWidth;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, readonly) NSURLResponse *previewResponse;
@property (nonatomic) bool progressive;
@property (nonatomic) bool shouldRemoveURLAfterGeneration;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *uti;

+ (void)registerPreview:(id)arg1;
+ (void)unregisterPreview:(id)arg1;
+ (Class)urlProtocolClass;

- (void).cxx_destruct;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(bool)arg3;
- (id)attachmentURLs;
- (void)cancel;
- (void)computePreview;
- (void)computePreviewInThread;
- (id)connection;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)fileName;
- (bool)htmlErrorDisabled;
- (bool)isCancelled;
- (bool)isComputed;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (long long)pageCount;
- (float)pageHeight;
- (float)pageWidth;
- (id)password;
- (id)previewRequest;
- (id)previewResponse;
- (bool)progressive;
- (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)safeRequestForRequest:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setHtmlErrorDisabled:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setProgressive:(bool)arg1;
- (void)setShouldRemoveURLAfterGeneration:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUti:(id)arg1;
- (bool)shouldRemoveURLAfterGeneration;
- (void)startComputingPreview;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (id)url;
- (id)uti;

@end
