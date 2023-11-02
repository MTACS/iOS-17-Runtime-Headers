
@protocol SOSInternalClientProtocol <SOSClientProtocol>

@required

- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;
- (void)didUpdateSOSStatus:(SOSStatus *)arg1;
- (void)dismissClientSOSWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateClientCurrentSOSButtonPressState:(SOSButtonPressState *)arg1;
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;

@end
