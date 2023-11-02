
@interface HAP2EncodedCharacteristicEvent : HAP2LoggingObject <HAP2EncodedCharacteristicEvent> {
    NSData * _encodedContextData;
    <HAP2AccessoryCharacteristicEncodedData> * _encodedValueData;
    NSNumber * _instanceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *encodedContextData;
@property (nonatomic, readonly) <HAP2AccessoryCharacteristicEncodedData> *encodedValueData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)encodedContextData;
- (id)encodedValueData;
- (id)init;
- (id)initWithInstanceID:(id)arg1 encodedValueData:(id)arg2 encodedContextData:(id)arg3;
- (id)instanceID;

@end
