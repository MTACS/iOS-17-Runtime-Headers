
@interface HFCharacteristicConditionItem : HFItem <HFConditionItem> {
    HFCharacteristicCondition * _condition;
}

@property (nonatomic, readonly) HFCharacteristicCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)condition;
- (id)init;
- (id)initWithCondition:(id)arg1;

@end
