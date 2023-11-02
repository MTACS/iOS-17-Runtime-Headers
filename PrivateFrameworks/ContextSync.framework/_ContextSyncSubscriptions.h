
@interface _ContextSyncSubscriptions : NSObject {
    NSMutableDictionary * _deviceToDevicesSubscriptions;
    NSMutableDictionary * _dictionaryRepresentation;
}

@property (nonatomic, retain) NSMutableDictionary *deviceToDevicesSubscriptions;
@property (nonatomic, retain) NSMutableDictionary *dictionaryRepresentation;

+ (id)deviceSubscribing:(id)arg1 withSubscriptons:(id)arg2;
+ (id)deviceToDevicesSubscriptions;
+ (id)loadFromDefaults:(id)arg1;

- (void).cxx_destruct;
- (bool)addWake:(bool)arg1 forIdentifier:(id)arg2 subscribedDevice:(id)arg3 subscribingDevice:(id)arg4;
- (id)convertToDictionary;
- (id)deviceToDevicesSubscriptions;
- (id)devicesSubscribedToDevice:(id)arg1;
- (id)devicesSubscribing;
- (id)dictionaryRepresentation;
- (bool)existsWakingIdentifiersOnSubscribedDevice:(id)arg1 forSubscribing:(id)arg2;
- (id)identifiersForSubscribingDevice:(id)arg1 onSubscribedDevice:(id)arg2;
- (bool)isIdentifierWaking:(id)arg1 subscribedDevice:(id)arg2 subscribingDevice:(id)arg3;
- (id)lastChangeDateForIdentifier:(id)arg1 onSubscribingDevice:(id)arg2 onSubscribedDevice:(id)arg3;
- (id)messageSubscriptionsForDevice:(id)arg1 withLocalIdentifiers:(id)arg2;
- (id)messageSubscriptionsForDevice:(id)arg1 withNewDSL:(id)arg2 withLocalIdentifiers:(id)arg3;
- (bool)removeAllIdentifiersOnSubscribedDevice:(id)arg1 subscribingDevice:(id)arg2;
- (bool)removeAllIdentifiersOnSubscribingDevice:(id)arg1;
- (bool)removeIdentifier:(id)arg1 subscribedDevice:(id)arg2 subscribingDevice:(id)arg3;
- (void)saveToDefaults:(id)arg1;
- (void)setDeviceToDevicesSubscriptions:(id)arg1;
- (void)setDictionaryRepresentation:(id)arg1;
- (id)sortedDevicesByWakeForIdentifier:(id)arg1 subscribedToDevice:(id)arg2;
- (id)subscriptionsOnDevice:(id)arg1;
- (id)wakeStateForIdentifier:(id)arg1 onSubscribingDevice:(id)arg2 onSubscribedDevice:(id)arg3;

@end
