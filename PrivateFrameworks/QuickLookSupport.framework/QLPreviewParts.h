
@interface QLPreviewParts : NSObject {
    NSMutableDictionary * _encodingsForURLs;
    NSMutableSet * _outstandingURLs;
    NSURL * _previewURL;
    NSMutableSet * _registeredURLs;
}

@property (nonatomic, retain) NSMutableDictionary *encodingsForURLs;
@property (nonatomic, retain) NSMutableSet *outstandingURLs;
@property (nonatomic, readonly) NSURLRequest *previewRequest;
@property (nonatomic, retain) NSURL *previewURL;
@property (nonatomic, retain) NSMutableSet *registeredURLs;

+ (void)registerPreview:(id)arg1;
+ (id)registeredPreviewForURL:(id)arg1;
+ (id)relativeStringForSafeURL:(id)arg1;
+ (void)unregisterPreview:(id)arg1;
+ (Class)urlProtocolClass;

- (void).cxx_destruct;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(bool)arg3;
- (void)cancel;
- (unsigned int)cfEncodingForAttachmentURL:(id)arg1;
- (void)computePreview:(id /* block */)arg1;
- (void)computePreviewInThread;
- (void)dealloc;
- (id)encodingsForURLs;
- (bool)isRegisteredURL:(id)arg1;
- (id)newAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)outstandingURLs;
- (id)previewRequest;
- (id)previewURL;
- (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)registeredURLs;
- (id)requestForURL:(id)arg1;
- (void)setEncodingsForURLs:(id)arg1;
- (void)setOutstandingURLs:(id)arg1;
- (void)setPreviewURL:(id)arg1;
- (void)setRegisteredURLs:(id)arg1;
- (void)startAttachmentWithURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (void)startComputingPreview;
- (void)startDataRepresentationWithMimeType:(id)arg1 textEncoding:(id)arg2;
- (id)voidRequest;

@end
