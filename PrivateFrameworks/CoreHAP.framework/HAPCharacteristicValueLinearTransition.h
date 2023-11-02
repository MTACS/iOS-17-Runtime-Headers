
@interface HAPCharacteristicValueLinearTransition : NSObject <HAPTLVProtocol, NSCopying> {
    HAPCharacteristicValueTransitionLinearStartConditionWrapper * _startBehavior;
    NSMutableArray * _transitionPoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPCharacteristicValueTransitionLinearStartConditionWrapper *startBehavior;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transitionPoints;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTransitionPoints:(id)arg1 startBehavior:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setStartBehavior:(id)arg1;
- (void)setTransitionPoints:(id)arg1;
- (id)startBehavior;
- (id)transitionPoints;

@end
