
@interface HAPSupportedCharacteristicValueTransition : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVSignedNumberValue * _HAPInstanceID;
    HAPCharacteristicValueTransitionTypesWrapper * _transitionTypes;
}

@property (nonatomic, retain) HAPTLVSignedNumberValue *HAPInstanceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPCharacteristicValueTransitionTypesWrapper *transitionTypes;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)HAPInstanceID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithHAPInstanceID:(id)arg1 transitionTypes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setHAPInstanceID:(id)arg1;
- (void)setTransitionTypes:(id)arg1;
- (id)transitionTypes;

@end
