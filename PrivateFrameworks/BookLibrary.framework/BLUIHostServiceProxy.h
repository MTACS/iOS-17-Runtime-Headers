
@interface BLUIHostServiceProxy : NSObject <BLUIHostServiceProtocol> {
    BLDownloadQueue * _downloadQueue;
    BLUIHostServiceNonUI * _fallback;
    BLRequest * _request;
    <BLDownloadQueueUIManagerProtocol> * _uiManagerDelegate;
}

@property (readonly) BLDownloadQueue *downloadQueue;
@property (readonly) BLUIHostServiceNonUI *fallback;
@property (readonly) BLRequest *request;
@property (readonly) <BLDownloadQueueUIManagerProtocol> *uiManagerDelegate;

- (void).cxx_destruct;
- (id)_topMostViewController;
- (id)downloadQueue;
- (id)fallback;
- (void)handleAuthenticateRequest:(id)arg1 withReply:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 withReply:(id /* block */)arg2;
- (void)handleEngagementRequest:(id)arg1 withReply:(id /* block */)arg2;
- (id)initWithUIManager:(id)arg1 forRequest:(id)arg2 inDownloadQueue:(id)arg3;
- (id)request;
- (id)uiManagerDelegate;

@end
