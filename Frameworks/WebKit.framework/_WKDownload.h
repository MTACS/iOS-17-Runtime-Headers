
@interface _WKDownload : NSObject <NSCopying, WKObject> {
    struct RetainPtr<WKDownload> { 
        void *m_ptr; 
    }  _download;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKFrameInfo *originatingFrame;
@property (nonatomic, readonly) WKWebView *originatingWebView;
@property (nonatomic, readonly, copy) NSArray *redirectChain;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSData *resumeData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasUserInitiated;

+ (id)downloadWithDownload:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDownload2:(id)arg1;
- (id)originatingFrame;
- (id)originatingWebView;
- (void)publishProgressAtURL:(id)arg1;
- (id)redirectChain;
- (id)request;
- (id)resumeData;
- (bool)wasUserInitiated;

@end
