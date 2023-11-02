
@protocol _INPBSendAnnouncementIntent <NSObject>

@required

+ (Class)recipientsType;

- (void)addRecipients:(_INPBHomeFilter *)arg1;
- (_INPBAnnouncement *)announcement;
- (void)clearRecipients;
- (bool)hasAnnouncement;
- (bool)hasIntentMetadata;
- (bool)hasIsReply;
- (bool)hasSharedUserID;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)isReply;
- (NSArray *)recipients;
- (_INPBHomeFilter *)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setAnnouncement:(_INPBAnnouncement *)arg1;
- (void)setHasIsReply:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSharedUserID:(NSString *)arg1;
- (NSString *)sharedUserID;

@end
