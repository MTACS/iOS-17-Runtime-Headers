
@interface HFNotSupportedReadPolicy : NSObject <HFCharacteristicReadPolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2;

@end
