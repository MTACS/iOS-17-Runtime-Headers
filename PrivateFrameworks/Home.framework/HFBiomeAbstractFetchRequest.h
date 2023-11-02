
@interface HFBiomeAbstractFetchRequest : NSObject {
    HMAccessory * _accessory;
    BMHomeKitClientAccessoryControlStream * _accessoryControlStream;
    HMHome * _home;
    HMRoom * _room;
    HMService * _service;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMZone * _zone;
}

@property (retain) HMAccessory *accessory;
@property (readonly) BMHomeKitClientAccessoryControlStream *accessoryControlStream;
@property (readonly) HMHome *home;
@property (retain) HMRoom *room;
@property (retain) HMService *service;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMZone *zone;

- (void).cxx_destruct;
- (void)_fetchWithPromise:(id)arg1;
- (id)accessory;
- (id)accessoryControlStream;
- (void)eventHandler:(id)arg1;
- (id)fetch;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (bool)publisherFilter:(id)arg1;
- (id)room;
- (id)service;
- (void)setAccessory:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setService:(id)arg1;
- (void)setZone:(id)arg1;
- (id)successHandler;
- (id)workQueue;
- (id)zone;

@end
