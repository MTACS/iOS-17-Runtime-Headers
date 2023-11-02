
@interface HFAnalyticsAnnounceRecordingEvent : HFAnalyticsEvent {
    NSNumber * _announceRecordingIsForHome;
    NSString * _announceRecordingIsForRoom;
    bool  _isAReply;
    NSString * _processName;
    NSString * _recipientAnnouncementID;
    NSNumber * _recordingDuration;
    NSNumber * _recordingFailed;
    bool  _recordingInterruptedByRouteChange;
    bool  _recordingInterruptedBySystem;
    bool  _recordingInterruptedByUser;
    NSNumber * _routeChangeInterruptionReason;
}

@property (nonatomic, retain) NSNumber *announceRecordingIsForHome;
@property (nonatomic, copy) NSString *announceRecordingIsForRoom;
@property (nonatomic) bool isAReply;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *recipientAnnouncementID;
@property (nonatomic, retain) NSNumber *recordingDuration;
@property (nonatomic, retain) NSNumber *recordingFailed;
@property (nonatomic) bool recordingInterruptedByRouteChange;
@property (nonatomic) bool recordingInterruptedBySystem;
@property (nonatomic) bool recordingInterruptedByUser;
@property (nonatomic, retain) NSNumber *routeChangeInterruptionReason;

- (void).cxx_destruct;
- (id)announceRecordingIsForHome;
- (id)announceRecordingIsForRoom;
- (id)initWithData:(id)arg1;
- (bool)isAReply;
- (id)payload;
- (id)processName;
- (id)recipientAnnouncementID;
- (id)recordingDuration;
- (id)recordingFailed;
- (bool)recordingInterruptedByRouteChange;
- (bool)recordingInterruptedBySystem;
- (bool)recordingInterruptedByUser;
- (id)routeChangeInterruptionReason;
- (void)setAnnounceRecordingIsForHome:(id)arg1;
- (void)setAnnounceRecordingIsForRoom:(id)arg1;
- (void)setIsAReply:(bool)arg1;
- (void)setProcessName:(id)arg1;
- (void)setRecipientAnnouncementID:(id)arg1;
- (void)setRecordingDuration:(id)arg1;
- (void)setRecordingFailed:(id)arg1;
- (void)setRecordingInterruptedByRouteChange:(bool)arg1;
- (void)setRecordingInterruptedBySystem:(bool)arg1;
- (void)setRecordingInterruptedByUser:(bool)arg1;
- (void)setRouteChangeInterruptionReason:(id)arg1;

@end
