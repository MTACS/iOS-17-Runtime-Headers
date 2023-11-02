
@interface HFTimeEventBuilderItem : HFEventBuilderItem {
    HFEventTriggerBuilder * _containingTriggerBuilder;
}

@property (nonatomic, retain) HFEventTriggerBuilder *containingTriggerBuilder;
@property (nonatomic, retain) HFEventBuilder<HFTimeEventBuilder> *timeEventBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)containingTriggerBuilder;
- (void)setContainingTriggerBuilder:(id)arg1;
- (void)setTimeEventBuilder:(id)arg1;
- (id)timeEventBuilder;

@end
