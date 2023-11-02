
@interface HDSummariesHealthDaemonPluginProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDNotificationSyncClientDelegate, HDProfileExtension> {
    HDNotificationSyncClient * _notificationSyncClient;
    HDPrimaryProfile * _profile;
    id /* block */  _unitTest_didProcessNotificationInstruction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDNotificationSyncClient *notificationSyncClient;
@property (nonatomic, readonly) HDPrimaryProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_didProcessNotificationInstruction;

- (void).cxx_destruct;
- (void)_handleDismissInstructionWithClient:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)notificationSyncClient;
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;
- (id)profile;
- (void)setNotificationSyncClient:(id)arg1;
- (void)setUnitTest_didProcessNotificationInstruction:(id /* block */)arg1;
- (id /* block */)unitTest_didProcessNotificationInstruction;

@end
