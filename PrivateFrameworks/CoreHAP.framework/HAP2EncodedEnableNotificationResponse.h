
@interface HAP2EncodedEnableNotificationResponse : HAP2EncodedCharacteristicResponse <HAP2EncodedEnableNotificationResponse> {
    NSSet * _updatedValues;
    NSSet * _valueResponses;
}

@property (nonatomic, readonly) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *updatedValues;

- (void).cxx_destruct;
- (id)initWithNotificationResponses:(id)arg1;
- (id)initWithNotificationResponses:(id)arg1 updatedValues:(id)arg2;
- (id)updatedValues;

@end
