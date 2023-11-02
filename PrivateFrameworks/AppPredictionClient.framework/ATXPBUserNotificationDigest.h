
@interface ATXPBUserNotificationDigest : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    NSMutableArray * _appDigests;
    ATXPBDigestTimeline * _digestTimeline;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _highlightedGroups;
    NSMutableArray * _messageGroups;
    NSString * _modeId;
    NSMutableArray * _rankedGroups;
    NSString * _rankerId;
    ATXPBSharedDigestEngagementTrackingMetrics * _sharedEngagementTracker;
    double  _timestamp;
    NSString * _uuid;
}

@property (nonatomic, retain) NSMutableArray *appDigests;
@property (nonatomic, retain) ATXPBDigestTimeline *digestTimeline;
@property (nonatomic, readonly) bool hasDigestTimeline;
@property (nonatomic, readonly) bool hasModeId;
@property (nonatomic, readonly) bool hasRankerId;
@property (nonatomic, readonly) bool hasSharedEngagementTracker;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSMutableArray *highlightedGroups;
@property (nonatomic, retain) NSMutableArray *messageGroups;
@property (nonatomic, retain) NSString *modeId;
@property (nonatomic, retain) NSMutableArray *rankedGroups;
@property (nonatomic, retain) NSString *rankerId;
@property (nonatomic, retain) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSString *uuid;

+ (Class)appDigestsType;
+ (Class)highlightedGroupsType;
+ (Class)messageGroupsType;
+ (Class)rankedGroupsType;

- (void).cxx_destruct;
- (void)addAppDigests:(id)arg1;
- (void)addHighlightedGroups:(id)arg1;
- (void)addMessageGroups:(id)arg1;
- (void)addRankedGroups:(id)arg1;
- (id)appDigests;
- (id)appDigestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appDigestsCount;
- (void)clearAppDigests;
- (void)clearHighlightedGroups;
- (void)clearMessageGroups;
- (void)clearRankedGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digestTimeline;
- (bool)hasDigestTimeline;
- (bool)hasModeId;
- (bool)hasRankerId;
- (bool)hasSharedEngagementTracker;
- (bool)hasTimestamp;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)highlightedGroups;
- (id)highlightedGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)highlightedGroupsCount;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)messageGroups;
- (id)messageGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageGroupsCount;
- (id)modeId;
- (id)rankedGroups;
- (id)rankedGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rankedGroupsCount;
- (id)rankerId;
- (bool)readFrom:(id)arg1;
- (void)setAppDigests:(id)arg1;
- (void)setDigestTimeline:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHighlightedGroups:(id)arg1;
- (void)setMessageGroups:(id)arg1;
- (void)setModeId:(id)arg1;
- (void)setRankedGroups:(id)arg1;
- (void)setRankerId:(id)arg1;
- (void)setSharedEngagementTracker:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUuid:(id)arg1;
- (id)sharedEngagementTracker;
- (double)timestamp;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
