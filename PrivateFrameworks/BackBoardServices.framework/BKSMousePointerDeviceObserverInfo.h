
@interface BKSMousePointerDeviceObserverInfo : NSObject {
    <BKSMousePointerDeviceObserver> * _observer;
    NSSet * _visibleDevices;
}

@property (nonatomic, retain) <BKSMousePointerDeviceObserver> *observer;
@property (nonatomic, retain) NSSet *visibleDevices;

- (void).cxx_destruct;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)setVisibleDevices:(id)arg1;
- (id)visibleDevices;

@end
