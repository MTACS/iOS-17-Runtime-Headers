
@interface HMDUserSettingsPerHomeLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _camerasAccessLevel;
    bool  _isAdmin;
    bool  _isAnnounceAccessAllowed;
    bool  _isOwner;
    bool  _isPersonalRequestsEnabled;
    bool  _isRecognizeMyVoiceEnabled;
    bool  _isRemoteAccessAllowed;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) unsigned long long camerasAccessLevel;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isAdmin;
@property (readonly) bool isAnnounceAccessAllowed;
@property (readonly) bool isOwner;
@property (readonly) bool isPersonalRequestsEnabled;
@property (readonly) bool isRecognizeMyVoiceEnabled;
@property (readonly) bool isRemoteAccessAllowed;
@property (readonly) Class superclass;

- (unsigned long long)camerasAccessLevel;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 userDataController:(id)arg2 homeUUID:(id)arg3;
- (bool)isAdmin;
- (bool)isAnnounceAccessAllowed;
- (bool)isOwner;
- (bool)isPersonalRequestsEnabled;
- (bool)isRecognizeMyVoiceEnabled;
- (bool)isRemoteAccessAllowed;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;

@end
