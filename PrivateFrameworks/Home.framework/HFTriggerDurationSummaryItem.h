
@interface HFTriggerDurationSummaryItem : HFItem {
    HFTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1;
- (id)triggerBuilder;

@end
