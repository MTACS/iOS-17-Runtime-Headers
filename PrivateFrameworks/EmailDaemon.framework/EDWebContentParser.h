
@interface EDWebContentParser : NSObject <ECWebContentObserver, EFSignpostable, WKNavigationDelegate, WKScriptMessageHandler> {
    <EFScheduler> * _backgroundWorkScheduler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentRuleListsLock;
    bool  _contentRuleListsNeedUpdate;
    EFCancelationToken * _contentRuleListsObservationToken;
    NSMutableArray * _currentContentRuleLists;
    bool  _isDataDetectionEnabled;
    unsigned long long  _options;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _remoteContentParserLock;
    EFLocked * _state;
    EFCancelationToken * _token;
    ECWebContentObserver * _webContentObserver;
    _WKRemoteObjectInterface * _webContentObserverInterface;
    WKWebView * _webView;
}

@property (nonatomic, readonly) <EFScheduler> *backgroundWorkScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDataDetectionEnabled;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_addRemoteContentWebViewObserver;
- (id)_checkHTMLDataForOneTimeCodes:(id)arg1 withSubject:(id)arg2;
- (void)_disableDataDetection;
- (void)_enableDataDetection;
- (id)_extractDataDetectorResultsMetadata:(id)arg1;
- (id)_getDataDetectionCategoryString:(int)arg1;
- (id)_parseHTMLData:(id)arg1 withOptions:(unsigned long long)arg2 characterEncodingName:(id)arg3 messageID:(id)arg4;
- (void)_retrieveRichLinkMetadata:(id)arg1;
- (id)_richLinkMetadataScript;
- (void)_updateContentRuleListsIfNeededForWebViewConfiguration:(id)arg1;
- (id)backgroundWorkScheduler;
- (void)baseURL:(id)arg1 didRequestRemoteContentURLs:(id)arg2;
- (void)contentRuleListManager:(id)arg1 didAddRuleList:(id)arg2;
- (void)contentRuleListManager:(id)arg1 didRemoveRuleList:(id)arg2;
- (void)contentRuleListManager:(id)arg1 didUpdateContentRuleList:(id)arg2 oldContentRuleList:(id)arg3;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1 cancelationToken:(id)arg2;
- (bool)isDataDetectionEnabled;
- (void)logWebBundleMessage:(id)arg1;
- (unsigned long long)options;
- (void)parseHTMLData:(id)arg1 withOptions:(unsigned long long)arg2 characterEncodingName:(id)arg3 forMessage:(id)arg4 withSubject:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)receiveDataDetectionResults:(id)arg1;
- (void)requestDataDetectionResultsWithBaseURL:(id)arg1;
- (void)setIsDataDetectionEnabled:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (unsigned long long)signpostID;
- (void)test_tearDown;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)webViewConfiguration;

@end
