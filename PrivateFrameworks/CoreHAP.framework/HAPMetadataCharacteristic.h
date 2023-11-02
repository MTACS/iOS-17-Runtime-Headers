
@interface HAPMetadataCharacteristic : HMFObject <HMHAPMetadataCharacteristic> {
    NSString * _chrDescription;
    NSString * _format;
    NSString * _name;
    NSNumber * _properties;
    NSString * _units;
    NSString * _uuidStr;
    HAPMetadataCharacteristicValue * _valueMetadata;
}

@property (nonatomic, retain) NSString *chrDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *properties;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *units;
@property (nonatomic, retain) NSString *uuidStr;
@property (nonatomic, retain) HAPMetadataCharacteristicValue *valueMetadata;

- (void).cxx_destruct;
- (id)chrDescription;
- (id)description;
- (void)dump;
- (id)format;
- (id)generateDictionary:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5;
- (id)name;
- (id)properties;
- (void)setChrDescription:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)units;
- (id)uuidStr;
- (id)valueMetadata;

@end
