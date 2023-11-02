
@interface HMCharacteristicReadRequest : HMCharacteristicRequest <HMReadOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)readRequestWithCharacteristic:(id)arg1;

- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
