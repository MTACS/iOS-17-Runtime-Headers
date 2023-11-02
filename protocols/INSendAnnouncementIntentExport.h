
@protocol INSendAnnouncementIntentExport <NSObject, JSExport>

@required

- (INAnnouncement *)announcement;
- (id)init;
- (NSNumber *)isReply;
- (NSArray *)recipients;
- (void)setAnnouncement:(INAnnouncement *)arg1;
- (void)setIsReply:(NSNumber *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSharedUserID:(NSString *)arg1;
- (NSString *)sharedUserID;

@end
