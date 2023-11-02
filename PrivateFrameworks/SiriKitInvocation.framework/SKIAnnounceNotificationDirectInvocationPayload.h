
@interface SKIAnnounceNotificationDirectInvocationPayload : NSObject {
    long long  _announcementPlatform;
    NSString * _appBundleId;
    NSString * _appBundleIdOfLastAnnouncement;
    bool  _isMediaPlaying;
    bool  _isSameTypeAsLastAnnouncement;
    UNNotification * _notification;
    unsigned long long  _synchronousBurstIndex;
    double  _timeSinceLastAnnouncement;
}

@property (nonatomic) long long announcementPlatform;
@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *appBundleIdOfLastAnnouncement;
@property (nonatomic) bool isMediaPlaying;
@property (nonatomic) bool isSameTypeAsLastAnnouncement;
@property (nonatomic, copy) UNNotification *notification;
@property (nonatomic) unsigned long long synchronousBurstIndex;
@property (nonatomic) double timeSinceLastAnnouncement;

- (void).cxx_destruct;
- (long long)announcementPlatform;
- (id)appBundleId;
- (id)appBundleIdOfLastAnnouncement;
- (id)initWithNotification:(id)arg1 appBundleId:(id)arg2 appBundleIdOfLastAnnouncement:(id)arg3 synchronousBurstIndex:(unsigned long long)arg4 isSameTypeAsLastAnnouncement:(bool)arg5 timeSinceLastAnnouncement:(double)arg6 announcementPlatform:(long long)arg7;
- (id)initWithNotification:(id)arg1 appBundleId:(id)arg2 appBundleIdOfLastAnnouncement:(id)arg3 synchronousBurstIndex:(unsigned long long)arg4 isSameTypeAsLastAnnouncement:(bool)arg5 timeSinceLastAnnouncement:(double)arg6 announcementPlatform:(long long)arg7 isMediaPlaying:(bool)arg8;
- (bool)isMediaPlaying;
- (bool)isSameTypeAsLastAnnouncement;
- (id)notification;
- (id)notificationIdentifier;
- (void)setAnnouncementPlatform:(long long)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setAppBundleIdOfLastAnnouncement:(id)arg1;
- (void)setIsMediaPlaying:(bool)arg1;
- (void)setIsSameTypeAsLastAnnouncement:(bool)arg1;
- (void)setNotification:(id)arg1;
- (void)setSynchronousBurstIndex:(unsigned long long)arg1;
- (void)setTimeSinceLastAnnouncement:(double)arg1;
- (unsigned long long)synchronousBurstIndex;
- (double)timeSinceLastAnnouncement;

@end
