
@interface UARPSupportedAccessoryManager : NSObject {
    NSObject<OS_os_log> * _log;
    NSMutableSet * _setOfAccessories;
}

@property (readonly) NSSet *setOfAccessories;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)addSupportedAccessories:(id)arg1;
- (void)addSupportedAccessoriesByURL:(id)arg1;
- (void)addSupportedAccessory:(id)arg1;
- (void)addSupportedAccessoryByDictionary:(id)arg1;
- (id)init;
- (id)setOfAccessories;

@end
