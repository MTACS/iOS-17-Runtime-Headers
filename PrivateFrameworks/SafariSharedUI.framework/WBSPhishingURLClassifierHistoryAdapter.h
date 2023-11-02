
@interface WBSPhishingURLClassifierHistoryAdapter : NSObject <WBSPhishingURLClassifier> {
    WBSHistory * _history;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithHistory:(id)arg1;

@end
