
@interface HMDAccessorySettingsMessageHandlerRoar : HMDAccessorySettingsMessageHandler

- (void)relayReplaceConstraints:(id)arg1 constraintIdsToRemove:(id)arg2 keyPath:(id)arg3 destination:(id)arg4 completion:(id /* block */)arg5;
- (void)relayUpdateValue:(id)arg1 keyPath:(id)arg2 destination:(id)arg3 completion:(id /* block */)arg4;

@end
