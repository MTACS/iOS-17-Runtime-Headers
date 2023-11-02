
@interface HFSuspendedStateOverrideValueProvider : NSObject <HFOverrideCharacteristicValueProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)overrideDefaultValueForCharacteristicType;

- (id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2;
- (bool)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2;

@end
