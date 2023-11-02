
@protocol HAPHTTPClientDependencyFactory

@required

- (<HAPCoreUtilsHTTPClient> *)createHTTPClientWithQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
