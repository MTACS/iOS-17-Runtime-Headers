
@interface ATXAppLaunchCountDataSource : NSObject {
    ATXHeuristicDevice * _device;
    <_DKKnowledgeQuerying> * _duetStore;
}

- (void).cxx_destruct;
- (void)appLaunchCountForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(unsigned long long)arg4 callback:(id /* block */)arg5;
- (id)initWithDevice:(id)arg1;

@end
