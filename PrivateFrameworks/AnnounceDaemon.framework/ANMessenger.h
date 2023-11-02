
@interface ANMessenger : NSObject <ANConnectionDelegate> {
    <ANMessengerDelegate> * _delegate;
    <ANIDSConnectionProvider> * _idsConnection;
    NSObject<OS_os_log> * _log;
    <ANRapportConnectionProvider> * _rapportConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANMessengerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ANIDSConnectionProvider> *idsConnection;
@property (nonatomic, readonly) ANParticipant *localParticipant;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) <ANRapportConnectionProvider> *rapportConnection;
@property (readonly) Class superclass;

+ (bool)_isAnnouncerAdminInAnnouncement:(id)arg1 home:(id)arg2;
+ (id)_performPreflightChecksForSendingContent:(id)arg1 toHome:(id)arg2;
+ (id)_performPreflightChecksForSendingToRooms:(id)arg1 zones:(id)arg2;
+ (void)_setIdentifiersForIDSService:(id)arg1 inLocation:(id)arg2 home:(id)arg3;
+ (id)announcementForAccessory:(id)arg1 inHome:(id)arg2 fromAnnouncement:(id)arg3;
+ (id)announcementForDevice:(id)arg1 inHome:(id)arg2 fromAnnouncement:(id)arg3;
+ (id)announcementForUser:(id)arg1 inHome:(id)arg2 fromAnnouncement:(id)arg3;
+ (id)createAnnouncementWithRequest:(id)arg1 forLocation:(id)arg2 inHome:(id)arg3 isReply:(bool)arg4 error:(id*)arg5;
+ (id)locationForHome:(id)arg1 rooms:(id)arg2 zones:(id)arg3 idsService:(id)arg4;
+ (id)locationForReplyToAnnouncement:(id)arg1 home:(id)arg2 idsService:(id)arg3;
+ (id)performBasicValidationForAnnouncement:(id)arg1 type:(unsigned long long)arg2;
+ (id)performIDSValidationForAnnouncement:(id)arg1 withSenderContext:(id)arg2;
+ (id)performPreflightChecksForSendingContent:(id)arg1 toHome:(id)arg2 rooms:(id)arg3 zones:(id)arg4;
+ (id)performRapportValidationForAnnouncement:(id)arg1 withSenderContext:(id)arg2;
+ (void)purgeTemporaryFiles;
+ (id)validateAnnouncerInAnnouncement:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (double)_calculateAnnouncementDeadline:(id)arg1;
- (void)_forwardRelayRequest:(id)arg1 withSenderContext:(id)arg2 sentHandler:(id /* block */)arg3;
- (void)_fulfillRelayRequest:(id)arg1 withSenderContext:(id)arg2 sentHandler:(id /* block */)arg3;
- (void)_logDebugInfoForHome:(id)arg1;
- (void)_relayAnnouncementThroughHomePod:(id)arg1 inHome:(id)arg2 rooms:(id)arg3 sentHandler:(id /* block */)arg4;
- (void)_sendAnnouncement:(id)arg1 toDestination:(id)arg2 sentHandler:(id /* block */)arg3;
- (bool)_willTargetReachableDevicesForAnnouncement:(id)arg1 inDestination:(id)arg2;
- (void)broadcastReply:(id)arg1 forAnnouncement:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanForExit;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2 fromSender:(id)arg3 senderContext:(id)arg4 handler:(id /* block */)arg5;
- (void)connection:(id)arg1 failedDeliveryForMessage:(id)arg2 withError:(id)arg3;
- (id)connectionDidReceiveRequestForHomeLocationStatus:(id)arg1;
- (id)delegate;
- (void)forwardAnnouncementToCompanion:(id)arg1;
- (id)getScanningDeviceCandidates;
- (id)idsConnection;
- (id)init;
- (id)initWithIDSConnection:(id)arg1 rapportConnection:(id)arg2;
- (id)localParticipant;
- (id)log;
- (void)mockAnnouncement:(id)arg1 playbackDeadline:(id)arg2 sentHandler:(id /* block */)arg3;
- (id)rapportConnection;
- (void)sendAnnouncement:(id)arg1 sentHandler:(id /* block */)arg2;
- (void)sendReply:(id)arg1 forAnnouncement:(id)arg2 completion:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 sentHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
