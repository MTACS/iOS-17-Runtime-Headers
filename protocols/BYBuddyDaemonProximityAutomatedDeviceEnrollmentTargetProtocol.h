
@protocol BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol <NSObject>

@required

- (void)activateUsingWiFiWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)configuratorPairingSuccessfulWithViewModel:(DMTEnrollmentStatusViewModel *)arg1;
- (void)dismissProximityPinCodeWithError:(NSError *)arg1;
- (void)displayProximityPinCode:(NSString *)arg1;
- (void)displayShutdownUI;
- (void)enrollmentCompleteWithViewModel:(DMTEnrollmentCompletionViewModel *)arg1;
- (void)enrollmentHasStatusUpdateWithViewModel:(DMTEnrollmentStatusViewModel *)arg1;
- (void)fetchActivationStateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
