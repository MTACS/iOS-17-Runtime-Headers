
@protocol CKNavBarUnifiedCallButtonDelegate

@required

- (void)button:(CKNavBarUnifiedCallButton *)arg1 requestsJoinActiveCallWithVideoEnabled:(bool)arg2;
- (void)buttonRequestsOpenJoinedCall:(CKNavBarUnifiedCallButton *)arg1;
- (void)buttonRequestsStartFaceTimeAudio:(CKNavBarUnifiedCallButton *)arg1;
- (void)buttonRequestsStartFaceTimeVideo:(CKNavBarUnifiedCallButton *)arg1;
- (void)buttonRequestsStartTelephonyCall:(CKNavBarUnifiedCallButton *)arg1;
- (void)buttonWidthDidChange:(CKNavBarUnifiedCallButton *)arg1;

@optional

- (void)buttonRequestsLeaveJoinedCall:(CKNavBarUnifiedCallButton *)arg1;

@end
