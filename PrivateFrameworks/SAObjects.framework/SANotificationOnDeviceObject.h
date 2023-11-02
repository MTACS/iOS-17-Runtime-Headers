
@interface SANotificationOnDeviceObject : SANotificationObject

@property (nonatomic, copy) NSString *announcementType;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSData *request;
@property (nonatomic, copy) NSString *senderHandle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)announcementType;
- (id)body;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)request;
- (id)senderHandle;
- (void)setAnnouncementType:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSenderHandle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

// Image: /System/Library/PrivateFrameworks/SiriNotificationsIntents.framework/SiriNotificationsIntents

- (id)description;
- (bool)isEqual:(id)arg1;

@end
