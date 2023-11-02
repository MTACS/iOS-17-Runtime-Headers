
@interface HFPowerStateTargetValueTuple : NSObject <NAIdentifiable> {
    NSString * _characteristicType;
    NSNumber * _offTargetValue;
    NSNumber * _onTargetValue;
}

@property (nonatomic, readonly) NSString *characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *offTargetValue;
@property (nonatomic, readonly) NSNumber *onTargetValue;
@property (readonly) Class superclass;

+ (id)fanStateTargetValueTuple;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)characteristicType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCharacteristicType:(id)arg1 onTargetValue:(id)arg2 offTargetValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)offTargetValue;
- (id)onTargetValue;
- (long long)primaryStateForTargetValue:(id)arg1;
- (id)targetValueForPrimaryState:(long long)arg1;

@end
