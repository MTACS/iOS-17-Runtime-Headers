
@interface HAPCharacteristicValueLinearDerivedTransition : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _sourceHAPInstanceID;
    HAPCharacteristicValueRange * _sourceValueRange;
    NSMutableArray * _transitionPoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *sourceHAPInstanceID;
@property (nonatomic, retain) HAPCharacteristicValueRange *sourceValueRange;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transitionPoints;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTransitionPoints:(id)arg1 sourceHAPInstanceID:(id)arg2 sourceValueRange:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setSourceHAPInstanceID:(id)arg1;
- (void)setSourceValueRange:(id)arg1;
- (void)setTransitionPoints:(id)arg1;
- (id)sourceHAPInstanceID;
- (id)sourceValueRange;
- (id)transitionPoints;

@end
