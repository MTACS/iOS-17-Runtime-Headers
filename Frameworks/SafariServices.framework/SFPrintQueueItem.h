
@interface SFPrintQueueItem : NSObject {
    bool  _completed;
    id /* block */  _completionHandler;
    _WKFrameHandle * _frameHandle;
    bool  _initiatedByWebContent;
}

@property (nonatomic, readonly) _WKFrameHandle *frameHandle;
@property (nonatomic, readonly) bool initiatedByWebContent;

- (void).cxx_destruct;
- (void)completeWithResult:(long long)arg1;
- (void)dealloc;
- (id)frameHandle;
- (id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)initiatedByWebContent;

@end
