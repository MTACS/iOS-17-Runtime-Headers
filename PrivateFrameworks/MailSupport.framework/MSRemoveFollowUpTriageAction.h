
@interface MSRemoveFollowUpTriageAction : MSTriageAction {
    EMFollowUp * _followUp;
}

@property (nonatomic, retain) EMFollowUp *followUp;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)followUp;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 followUp:(id)arg5;
- (void)setFollowUp:(id)arg1;

@end
