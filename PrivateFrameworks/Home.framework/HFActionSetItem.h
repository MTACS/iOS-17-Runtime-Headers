
@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    HMActionSet * _actionSet;
    unsigned long long  _actionSetItemStyle;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3 fastInitialUpdate:(bool)arg4;
+ (bool)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 forMinimumValue:(id)arg3 maximumValue:(id)arg4;

- (void).cxx_destruct;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_mostCommonRoomForActionSet:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)actionSet;
- (unsigned long long)actionSetItemStyle;
- (id)actionSetOperation:(id)arg1 errorFromError:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)executeActionSet;
- (id)homeKitObject;
- (id)init;
- (id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3;
- (id)rooms;
- (id)serviceLikeItem;
- (void)setServiceLikeItem:(id)arg1;
- (id)turnOffActionSet;
- (id)valueSource;

@end
