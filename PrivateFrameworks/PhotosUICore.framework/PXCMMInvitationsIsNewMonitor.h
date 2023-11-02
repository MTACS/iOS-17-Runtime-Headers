
@interface PXCMMInvitationsIsNewMonitor : NSObject {
    NSDate * _lastExitedForYouDate;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_lastExitedDateDidChange:(id)arg1;
- (void)_updateLastExitedDate;
- (id)init;
- (bool)invitationIsNew:(id)arg1;

@end
