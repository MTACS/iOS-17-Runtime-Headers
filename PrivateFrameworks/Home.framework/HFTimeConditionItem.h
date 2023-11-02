
@interface HFTimeConditionItem : HFItem <HFConditionItem> {
    HFTimeCondition * _condition;
    unsigned long long  _type;
}

@property (nonatomic, retain) HFTimeCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)condition;
- (id)init;
- (id)initWithCondition:(id)arg1;
- (id)initWithConditionType:(unsigned long long)arg1;
- (id)initWithConditionType:(unsigned long long)arg1 condition:(id)arg2;
- (void)setCondition:(id)arg1;
- (unsigned long long)type;

@end
