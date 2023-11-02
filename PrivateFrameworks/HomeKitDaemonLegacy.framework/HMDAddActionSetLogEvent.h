
@interface HMDAddActionSetLogEvent : HMMHomeLogEvent {
    NSString * _actionSetType;
}

@property (readonly, copy) NSString *actionSetType;

- (void).cxx_destruct;
- (id)actionSetType;
- (id)initWithActionSetType:(id)arg1 homeUUID:(id)arg2;

@end
