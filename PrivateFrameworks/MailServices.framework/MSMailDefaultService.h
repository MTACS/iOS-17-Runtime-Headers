
@interface MSMailDefaultService : MSService {
    bool  _shouldLaunch;
}

@property (nonatomic) bool shouldLaunchMobileMail;

- (id)_createServiceOnQueue:(id)arg1;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4;
- (bool)_launchMobileMailSuspendedError:(id*)arg1;
- (id)init;
- (void)setShouldLaunchMobileMail:(bool)arg1;
- (bool)shouldLaunchMobileMail;

@end
