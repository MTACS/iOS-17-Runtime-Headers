
@interface WBSMetadataExtractor : NSObject {
    JSContext * _context;
    WKWebProcessPlugInFrame * _webProcessPlugInFrame;
    WKWebProcessPlugInScriptWorld * _webProcessPlugInScriptWorld;
}

@property (nonatomic, readonly) JSContext *context;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *webProcessPlugInFrame;

+ (id)metadataExtractorScriptSource;

- (void).cxx_destruct;
- (id)_colorFromColorComponents:(id)arg1;
- (id)_resultForInvokingFunctionWithName:(id)arg1;
- (id)appleTouchIconURLs;
- (id)context;
- (void)dealloc;
- (id)faviconURLs;
- (id)firstElementForSelector:(id)arg1;
- (void)getTemplateIconURL:(id*)arg1 andColor:(id*)arg2;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(bool)arg2;
- (id)makeContext;
- (id)webProcessPlugInFrame;

@end
