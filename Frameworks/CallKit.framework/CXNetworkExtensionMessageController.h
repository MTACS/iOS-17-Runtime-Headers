
@interface CXNetworkExtensionMessageController : NSObject {
    <CXNetworkExtensionMessageControllerDataSource> * _dataSource;
}

@property (nonatomic, readonly) <CXNetworkExtensionMessageControllerDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)sendNetworkExtensionPushToTalkMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
