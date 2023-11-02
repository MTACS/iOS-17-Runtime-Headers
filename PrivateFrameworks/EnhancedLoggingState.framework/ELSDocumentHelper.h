
@interface ELSDocumentHelper : NSObject <WKNavigationDelegate> {
    NSArray * _contentsText;
    NSString * _fullName;
    UIImage * _imageSignature;
    NSMutableData * _pdfData;
    NSURL * _tempURL;
    WKWebView * _webView;
}

@property (nonatomic, copy) NSArray *contentsText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIImage *imageSignature;
@property (nonatomic, retain) NSMutableData *pdfData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *tempURL;
@property (nonatomic, retain) WKWebView *webView;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (id)contentsText;
- (id)fullName;
- (id)imageSignature;
- (id)initSingleton;
- (id)pdfData;
- (id)saveData:(id)arg1 toFilePath:(id)arg2;
- (void)setContentsText:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setImageSignature:(id)arg1;
- (void)setPdfData:(id)arg1;
- (void)setTempURL:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)tempURL;
- (id)webView;

@end
