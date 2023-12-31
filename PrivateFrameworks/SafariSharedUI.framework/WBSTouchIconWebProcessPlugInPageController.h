
@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    bool  _didRecieveDidHandleOnloadEventsForFrameCallback;
    unsigned long long  _mainFrameMainResourceId;
    bool  _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;
    <WBSTouchIconObserver> * _touchIconObserver;
}

@property (nonatomic, readonly) <WBSTouchIconObserver> *touchIconObserver;

- (void).cxx_destruct;
- (id)_extractFaviconURLsIncludingDefaultURLs:(bool)arg1 didExtractNonDefaultIconURLs:(bool*)arg2;
- (id)_extractTouchIconURLsIncludingDefaultURLs:(bool)arg1 didExtractNonDefaultIconURLs:(bool*)arg2;
- (id)touchIconObserver;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(bool)arg5;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;

@end
