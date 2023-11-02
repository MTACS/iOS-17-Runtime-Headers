
@interface WBSTranslationWebpageContentExtractor : NSObject <WBSTranslationContentExtracting, WBSTranslationContentFilling, _WKTextManipulationDelegate> {
    bool  _currentlyExtractingContent;
    <WBSTranslationContentExtractionDelegate> * _extractionDelegate;
    <WBSTranslationContentFillingDelegate> * _fillingDelegate;
    bool  _needsHTMLLangAttributeUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _replaceItemsLock;
    NSMutableArray * _replaceItemsQueue;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <WBSTranslationContentExtractionDelegate> *extractionDelegate;
@property (nonatomic) <WBSTranslationContentFillingDelegate> *fillingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_replaceItemsWithSignpostID:(unsigned long long)arg1;
- (void)_scheduleReplaceItemsWithTargetLocale:(id)arg1;
- (id)_textManipulationConfiguration;
- (void)_updateHTMLLanguageAttributesIfNeeded:(id)arg1;
- (void)_webView:(id)arg1 didFindTextManipulationItem:(id)arg2;
- (void)_webView:(id)arg1 didFindTextManipulationItems:(id)arg2;
- (void)beginExtractingContent;
- (id)extractionDelegate;
- (id)fillingDelegate;
- (id)initWithWebView:(id)arg1;
- (void)replaceExtractedContent:(id)arg1 withTranslatedContent:(id)arg2 targetLocale:(id)arg3;
- (void)setExtractionDelegate:(id)arg1;
- (void)setFillingDelegate:(id)arg1;
- (void)stopExtractingContent;

@end
