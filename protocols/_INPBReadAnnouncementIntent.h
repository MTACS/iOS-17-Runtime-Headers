
@protocol _INPBReadAnnouncementIntent <NSObject>

@required

- (int)StringAsReadType:(NSString *)arg1;
- (int)StringAsUserNotificationType:(NSString *)arg1;
- (bool)hasIntentMetadata;
- (bool)hasReadType;
- (bool)hasStartAnnouncementIdentifier;
- (bool)hasUserNotificationType;
- (_INPBIntentMetadata *)intentMetadata;
- (int)readType;
- (NSString *)readTypeAsString:(int)arg1;
- (void)setHasReadType:(bool)arg1;
- (void)setHasUserNotificationType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setReadType:(int)arg1;
- (void)setStartAnnouncementIdentifier:(NSString *)arg1;
- (void)setUserNotificationType:(int)arg1;
- (NSString *)startAnnouncementIdentifier;
- (int)userNotificationType;
- (NSString *)userNotificationTypeAsString:(int)arg1;

@end
