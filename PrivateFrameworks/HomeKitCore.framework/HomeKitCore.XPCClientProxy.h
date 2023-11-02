
@interface HomeKitCore.XPCClientProxy : NSObject <HomeKitCore.XPCServerInterface> {
    void connection;
    void modelController;
}

- (void).cxx_destruct;
- (void)fetchModelsWithType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchModelsWithTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)registerObserver:(id)arg1 modelTypes:(id)arg2 completionHandler:(id /* block */)arg3;

@end
