
@interface HMDSiriAccessoryMonitor : NSObject {
    NSMapTable * _accessories;
    <HMDSiriAccessoryMonitorDelegate> * _delegate;
}

@property (nonatomic, retain) NSMapTable *accessories;
@property (nonatomic, readonly) <HMDSiriAccessoryMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (id)_accessoriesTargetingAccessory:(id)arg1;
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;
- (id)_getInfoForAccessory:(id)arg1;
- (void)_removeAccessory:(id)arg1;
- (id)accessories;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(bool)arg2;
- (id)delegate;
- (bool)hasAnyActiveTargetingAccessories;
- (id)initWithDelegate:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;

@end
