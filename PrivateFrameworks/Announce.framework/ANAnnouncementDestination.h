
@interface ANAnnouncementDestination : NSObject <NSSecureCoding> {
    ANAnnouncement * _announcement;
    NSString * _announcementIdentifier;
    id  _homeObject;
    bool  _replyToSender;
    NSArray * _roomObjects;
    unsigned long long  _type;
    NSArray * _zoneObjects;
}

@property (nonatomic, retain) ANAnnouncement *announcement;
@property (nonatomic, retain) NSString *announcementIdentifier;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) id homeObject;
@property (nonatomic, retain) NSArray *roomObjects;
@property (nonatomic, readonly) NSArray *rooms;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSArray *zoneObjects;
@property (nonatomic, readonly) NSArray *zones;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

+ (id)destinationWithHomeIdentifier:(id)arg1;
+ (id)destinationWithHomeIdentifier:(id)arg1 zoneIdentifiers:(id)arg2 roomIdentifiers:(id)arg3;
+ (id)destinationWithHomeName:(id)arg1;
+ (id)destinationWithHomeName:(id)arg1 zoneNames:(id)arg2 roomNames:(id)arg3;
+ (id)destinationWithReplyToAnnouncementIdentifier:(id)arg1;
+ (id)stringFromAnnouncementDestinationType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)announcement;
- (id)announcementIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeObject;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)replyToSender;
- (id)roomObjects;
- (void)setAnnouncement:(id)arg1;
- (void)setAnnouncementIdentifier:(id)arg1;
- (void)setHomeObject:(id)arg1;
- (void)setReplyToSender:(bool)arg1;
- (void)setRoomObjects:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setZoneObjects:(id)arg1;
- (unsigned long long)type;
- (id)zoneObjects;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

- (id)home;
- (id)rooms;
- (id)zones;

@end
