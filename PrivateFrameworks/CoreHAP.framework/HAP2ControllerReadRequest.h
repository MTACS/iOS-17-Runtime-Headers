
@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest> {
    NSArray * _originalCharacteristics;
}

@property (nonatomic, readonly) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *originalCharacteristics;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)characteristics;
- (id)initWithCharacteristics:(id)arg1;
- (bool)isEncrypted;
- (id)originalCharacteristics;
- (id)serialize;
- (unsigned long long)type;

@end
