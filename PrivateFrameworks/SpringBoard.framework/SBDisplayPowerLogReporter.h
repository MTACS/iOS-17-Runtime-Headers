
@interface SBDisplayPowerLogReporter : NSObject {
    NSMutableDictionary * _displayNameToPowerLogEntry;
    NSObject<OS_dispatch_queue> * _powerLogSendQueue;
    <BSInvalidatable> * _stateCaptureAssertion;
}

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)reportPowerLogEntry:(id)arg1;

@end
