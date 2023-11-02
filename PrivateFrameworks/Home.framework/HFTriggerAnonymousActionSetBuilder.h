
@interface HFTriggerAnonymousActionSetBuilder : HFAbstractBaseActionSetBuilder {
    unsigned long long  _actionSetType;
    HMTrigger * _containingTrigger;
}

@property (nonatomic, readonly) HFMutableSetDiff *actionBuilders;
@property (nonatomic) unsigned long long actionSetType;
@property (nonatomic, retain) HMTrigger *containingTrigger;

- (void).cxx_destruct;
- (unsigned long long)actionSetType;
- (void)addAction:(id)arg1 actionSetType:(unsigned long long)arg2;
- (id)commitItem;
- (id)containingTrigger;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createActionSetBuilder;
- (id)deleteActionSet;
- (id)getOrCreateActionSet;
- (bool)hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (void)setActionSetType:(unsigned long long)arg1;
- (void)setContainingTrigger:(id)arg1;
- (id)shortcutsComponentActionSet;
- (void)updateAction:(id)arg1;
- (void)updateActionBuildersDiff:(id)arg1;
- (bool)useActionSetBuilder;

@end
