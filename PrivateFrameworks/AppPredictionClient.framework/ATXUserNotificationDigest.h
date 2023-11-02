
@interface ATXUserNotificationDigest : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, BMStoreData, NSCopying, NSSecureCoding> {
    NSArray * _appDigests;
    double  _creationTimestamp;
    ATXSharedDigestEngagementTrackingMetrics * _digestEngagementTrackingMetrics;
    ATXDigestTimeline * _digestTimeline;
    bool  _hasLoggedCollapsed;
    bool  _hasLoggedScheduled;
    bool  _hasLoggedUpcoming;
    NSArray * _highlightedGroups;
    ATXUserNotificationDigestBiomeStream * _loggingStream;
    NSArray * _messageGroups;
    NSString * _modeIdString;
    NSArray * _rankedGroups;
    NSString * _rankerId;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSArray *appDigests;
@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (nonatomic, copy) ATXDigestTimeline *digestTimeline;
@property (nonatomic, readonly) NSArray *globalMarqueeGroups;
@property (nonatomic, readonly) bool hasLoggedCollapsed;
@property (nonatomic, readonly) bool hasLoggedScheduled;
@property (nonatomic, readonly) bool hasLoggedUpcoming;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *highlightedGroups;
@property (nonatomic, retain) ATXUserNotificationDigestBiomeStream *loggingStream;
@property (nonatomic, readonly) NSArray *messageGroups;
@property (nonatomic, readonly) NSString *modeIdString;
@property (nonatomic, readonly) NSArray *rankedGroups;
@property (nonatomic, copy) NSString *rankerId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)getFlattenedGroupsFromAppDigests:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allNotificationIds;
- (id)appDigests;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationTimestamp;
- (unsigned int)dataVersion;
- (id)digestEngagementTrackingMetrics;
- (id)digestTimeline;
- (bool)doesDigestShareContentWithOtherDigest:(id)arg1;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)globalMarqueeGroups;
- (bool)hasLoggedCollapsed;
- (bool)hasLoggedScheduled;
- (bool)hasLoggedUpcoming;
- (id)highlightedGroups;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)initWithAppDigests:(id)arg1 highlightedGroups:(id)arg2 messageGroups:(id)arg3 rankerId:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroups:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;
- (id)initWithMessageGroups:(id)arg1 highlightedGroups:(id)arg2 otherGroups:(id)arg3 rankerId:(id)arg4;
- (id)initWithNotificationArrays:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2;
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)jsonRepresentation;
- (void)logCollapsedPreview;
- (void)logCollapsedPreviewWithTimestamp:(double)arg1;
- (void)logScheduledView;
- (void)logScheduledViewWithTimestamp:(double)arg1;
- (void)logUpcomingView;
- (void)logUpcomingViewWithTimestamp:(double)arg1;
- (id)loggingStream;
- (id)messageGroups;
- (id)modeIdString;
- (id)proto;
- (id)rankedGroups;
- (id)rankerId;
- (id)serialize;
- (void)setDigestEngagementTrackingMetrics:(id)arg1;
- (void)setDigestTimeline:(id)arg1;
- (void)setLoggingStream:(id)arg1;
- (void)setRankerId:(id)arg1;
- (id)uuid;
- (id)viewFlattenedGroups;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (unsigned long long)computeNumDigestExpansions;
- (void)populateEngagementFromSource:(id)arg1;

@end
