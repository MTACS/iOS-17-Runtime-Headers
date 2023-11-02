
@interface HFPresenceCondition : HFCondition {
    HMPresenceEvent * _presenceEvent;
}

@property (nonatomic, retain) HMPresenceEvent *presenceEvent;

- (void).cxx_destruct;
- (id)hf_naturalLanguageSummaryWithOptions:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithPresenceEvent:(id)arg1;
- (id)presenceEvent;
- (void)setPresenceEvent:(id)arg1;

@end
