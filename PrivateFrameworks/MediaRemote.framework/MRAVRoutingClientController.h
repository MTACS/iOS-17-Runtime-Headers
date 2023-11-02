
@interface MRAVRoutingClientController : NSObject {
    NSMutableDictionary * _cachedRoutesForCategories;
    MRMediaRemoteService * _mediaRemoteService;
    NSMutableDictionary * _pendingCompletionHandlersForCategories;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) MRMediaRemoteService *mediaRemoteService;

- (void).cxx_destruct;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithMediaRemoteService:(id)arg1;
- (id)mediaRemoteService;

@end
