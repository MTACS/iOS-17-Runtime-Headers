
@interface HFCustomCharacteristicActionSuggestionResult : NSObject {
    HMCharacteristic * _characteristic;
    bool  _isMutuallyExclusiveAction;
    NSSet * _matchingExistingActions;
    id  _targetValue;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic) bool isMutuallyExclusiveAction;
@property (nonatomic, readonly, copy) NSSet *matchingExistingActions;
@property (nonatomic, readonly) id targetValue;

- (void).cxx_destruct;
- (id)characteristic;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 matchingActions:(id)arg3;
- (bool)isMutuallyExclusiveAction;
- (id)matchingExistingActions;
- (void)setIsMutuallyExclusiveAction:(bool)arg1;
- (id)targetValue;

@end
