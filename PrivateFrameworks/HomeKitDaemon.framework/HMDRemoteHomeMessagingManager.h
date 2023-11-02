
@interface HMDRemoteHomeMessagingManager : NSObject <HMDRemoteHomeMessagingManager, HMFLogging> {
    NSMapTable * _homeUUIDToHandlerMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *homeUUIDToHandlerMap;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)homeUUIDToHandlerMap;
- (id)init;
- (void)registerHandler:(id)arg1;
- (bool)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;

@end
