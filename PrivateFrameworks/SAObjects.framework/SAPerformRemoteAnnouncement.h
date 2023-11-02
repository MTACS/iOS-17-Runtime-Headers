
@interface SAPerformRemoteAnnouncement : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *announcementIdentifier;
@property (nonatomic, copy) NSNumber *announcementNotificationType;
@property (nonatomic, copy) NSNumber *announcementPlatform;
@property (nonatomic, copy) NSDate *announcementTimestamp;
@property (nonatomic, copy) NSNumber *announcementType;
@property (nonatomic, retain) SAStartLocalRequest *startLocalRequest;

- (id)announcementIdentifier;
- (id)announcementNotificationType;
- (id)announcementPlatform;
- (id)announcementTimestamp;
- (id)announcementType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAnnouncementIdentifier:(id)arg1;
- (void)setAnnouncementNotificationType:(id)arg1;
- (void)setAnnouncementPlatform:(id)arg1;
- (void)setAnnouncementTimestamp:(id)arg1;
- (void)setAnnouncementType:(id)arg1;
- (void)setStartLocalRequest:(id)arg1;
- (id)startLocalRequest;

@end
