
@interface HKActiveDataCollectionObserver : NSObject <_HKXPCExportable> {
    NSArray * _activelyCollectedTypes;
    bool  _allowCollectionPause;
    <HKActiveDataCollectionObserverDelegate> * _delegate;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
    NSMutableSet * _subscribedTypes;
}

@property (nonatomic, readonly, copy) NSArray *activelyCollectedTypes;
@property (nonatomic, readonly) bool allowCollectionPause;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKActiveDataCollectionObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)activelyCollectedTypes;
- (bool)allowCollectionPause;
- (void)client_didChangeAllowCollectionPause:(bool)arg1;
- (void)client_updatedCollectedTypes:(id)arg1;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;
- (void)subscribeForQuantityTypes:(id)arg1;
- (void)unsubscribeForQuantityTypes:(id)arg1;

@end
