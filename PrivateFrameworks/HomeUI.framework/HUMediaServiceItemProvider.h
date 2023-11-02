
@interface HUMediaServiceItemProvider : HFItemProvider <HFMediaServiceManagerObserver> {
    <HUMediaServiceItemProviderDelegate> * _delegate;
    HMHome * _home;
    NSMutableSet * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUMediaServiceItemProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSMutableSet *items;
@property (readonly) Class superclass;

+ (id /* block */)itemComparator;

- (void).cxx_destruct;
- (id)_fetchMediaServicesFuture;
- (void)_notifyMediaServicesUpdated;
- (void)defaultMediaServiceDidUpdate:(id)arg1;
- (id)delegate;
- (id)home;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (id)items;
- (void)mediaServiceDidUpdate:(id)arg1;
- (void)mediaServiceRemoved:(id)arg1;
- (void)mediaServicesDidUpdate:(id)arg1;
- (void)registerForExternalUpdates;
- (id)reloadItems;
- (void)setDelegate:(id)arg1;
- (void)unregisterForExternalUpdates;

@end
