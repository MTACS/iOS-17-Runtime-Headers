
@interface ATXPBUserNotificationDigestNotificationGroup : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    NSString * _groupDescription;
    NSString * _groupId;
    struct { 
        unsigned int priority : 1; 
    }  _has;
    double  _priority;
    NSMutableArray * _rankedNotifications;
    NSString * _representativeNotificationUUID;
    ATXPBSharedDigestEngagementTrackingMetrics * _sharedEngagementTracker;
    NSString * _title;
}

@property (nonatomic, retain) NSString *groupDescription;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic, readonly) bool hasGroupDescription;
@property (nonatomic, readonly) bool hasGroupId;
@property (nonatomic) bool hasPriority;
@property (nonatomic, readonly) bool hasRepresentativeNotificationUUID;
@property (nonatomic, readonly) bool hasSharedEngagementTracker;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) double priority;
@property (nonatomic, retain) NSMutableArray *rankedNotifications;
@property (nonatomic, retain) NSString *representativeNotificationUUID;
@property (nonatomic, retain) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;
@property (nonatomic, retain) NSString *title;

+ (Class)rankedNotificationsType;

- (void).cxx_destruct;
- (void)addRankedNotifications:(id)arg1;
- (void)clearRankedNotifications;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupDescription;
- (id)groupId;
- (bool)hasGroupDescription;
- (bool)hasGroupId;
- (bool)hasPriority;
- (bool)hasRepresentativeNotificationUUID;
- (bool)hasSharedEngagementTracker;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)priority;
- (id)rankedNotifications;
- (id)rankedNotificationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rankedNotificationsCount;
- (bool)readFrom:(id)arg1;
- (id)representativeNotificationUUID;
- (void)setGroupDescription:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setPriority:(double)arg1;
- (void)setRankedNotifications:(id)arg1;
- (void)setRepresentativeNotificationUUID:(id)arg1;
- (void)setSharedEngagementTracker:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sharedEngagementTracker;
- (id)title;
- (void)writeTo:(id)arg1;

@end
