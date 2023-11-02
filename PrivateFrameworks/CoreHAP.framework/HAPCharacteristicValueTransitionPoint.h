
@interface HAPCharacteristicValueTransitionPoint : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _startDelayDuration;
    HAPTLVUnsignedNumberValue * _targetCompletionDuration;
    NSData * _targetValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *startDelayDuration;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *targetCompletionDuration;
@property (nonatomic, retain) NSData *targetValue;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTargetValue:(id)arg1 targetCompletionDuration:(id)arg2 startDelayDuration:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setStartDelayDuration:(id)arg1;
- (void)setTargetCompletionDuration:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)startDelayDuration;
- (id)targetCompletionDuration;
- (id)targetValue;

@end
