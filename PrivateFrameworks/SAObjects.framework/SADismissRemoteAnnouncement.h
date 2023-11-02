
@interface SADismissRemoteAnnouncement : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *announcementIdentifier;

- (id)announcementIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAnnouncementIdentifier:(id)arg1;

@end
