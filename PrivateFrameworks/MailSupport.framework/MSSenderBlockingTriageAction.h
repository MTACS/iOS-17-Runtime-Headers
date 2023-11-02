
@interface MSSenderBlockingTriageAction : MSTriageAction {
    bool  _blockSender;
}

- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 blockSender:(bool)arg5;

@end
