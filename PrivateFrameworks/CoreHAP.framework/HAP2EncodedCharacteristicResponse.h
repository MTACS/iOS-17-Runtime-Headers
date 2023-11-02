
@interface HAP2EncodedCharacteristicResponse : HAP2LoggingObject <HAP2EncodedCharacteristicResponse> {
    NSArray * _responses;
}

@property (nonatomic, readonly) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)characteristics;
- (id)initWithCharacteristics:(id)arg1;
- (bool)isEncrypted;

@end
