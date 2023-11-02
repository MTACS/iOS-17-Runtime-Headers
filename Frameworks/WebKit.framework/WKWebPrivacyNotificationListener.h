
@interface WKWebPrivacyNotificationListener : NSObject {
    struct BlockPtr<void ()>="m_block"@? {}  _linkFilteringDataCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didUpdate:(id)arg1;
- (id)init;
- (void)listenForLinkFilteringDataChanges:(id /* block */)arg1;

@end
