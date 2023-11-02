
@interface APSIncomingMessage : APSMessage

@property (nonatomic, retain) NSString *channelID;
@property (nonatomic, retain) NSDate *expirationDate;
@property (getter=wasFromStorage, nonatomic) bool fromStorage;
@property (nonatomic) long long incomingInterface;
@property (getter=wasLastMessageFromStorage, nonatomic) bool lastMessageFromStorage;
@property (nonatomic, copy) NSData *perAppToken;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned int pushFlags;
@property (nonatomic) unsigned long long pushType;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSData *token;
@property (getter=isTracingEnabled, nonatomic) bool tracingEnabled;
@property (nonatomic, copy) NSData *tracingUUID;

// Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService

- (id)channelID;
- (id)expirationDate;
- (long long)incomingInterface;
- (bool)isTracingEnabled;
- (id)perAppToken;
- (long long)priority;
- (unsigned int)pushFlags;
- (unsigned long long)pushType;
- (void)setChannelID:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFromStorage:(bool)arg1;
- (void)setIncomingInterface:(long long)arg1;
- (void)setLastMessageFromStorage:(bool)arg1;
- (void)setPerAppToken:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setPushFlags:(unsigned int)arg1;
- (void)setPushType:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTracingEnabled:(bool)arg1;
- (void)setTracingUUID:(id)arg1;
- (id)timestamp;
- (id)token;
- (id)tracingUUID;
- (bool)wasFromStorage;
- (bool)wasLastMessageFromStorage;

// Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore

- (id)unc_pushTypeDescription;

@end
