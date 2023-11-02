
@protocol _INPBSendAnnouncementIntentResponse <NSObject>

@required

+ (Class)sentAnnouncementsType;

- (void)addSentAnnouncements:(_INPBAnnouncementRecord *)arg1;
- (void)clearSentAnnouncements;
- (NSArray *)sentAnnouncements;
- (_INPBAnnouncementRecord *)sentAnnouncementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sentAnnouncementsCount;
- (void)setSentAnnouncements:(NSArray *)arg1;

@end
