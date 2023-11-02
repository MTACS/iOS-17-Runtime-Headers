
@interface MSFlagChangeTriageAction : MSTriageAction {
    long long  _reason;
}

@property (nonatomic, readonly) <MSFlagChangeTriageActionDelegate> *delegate;
@property (nonatomic, readonly) bool flagState;
@property (nonatomic, readonly) ECMessageFlags *messageFlags;
@property (nonatomic, readonly) long long reason;

- (id)_changeAction;
- (void)_toggleFlagWithBuilder:(id)arg1;
- (bool)flagState;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 reason:(long long)arg5;
- (id)messageFlags;
- (long long)reason;

@end
