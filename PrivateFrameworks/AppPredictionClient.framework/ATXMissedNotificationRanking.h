
@interface ATXMissedNotificationRanking : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    double  _creationTimestamp;
    ATXSharedDigestEngagementTrackingMetrics * _digestEngagementTrackingMetrics;
    ATXDigestTimeline * _digestTimeline;
    bool  _hasLoggedCollapsed;
    bool  _hasLoggedDeliveredCollapsed;
    bool  _hasLoggedDeliveredExpanded;
    bool  _hasLoggedExpanded;
    bool  _hasLoggedRemoval;
    bool  _hasLoggedUpcomingCollapsed;
    bool  _hasLoggedUpcomingExpanded;
    ATXMissedNotificationRankingBiomeStream * _loggingStream;
    NSString * _modeIdString;
    NSArray * _rankedGroups;
    NSString * _rankerId;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (nonatomic, copy) ATXDigestTimeline *digestTimeline;
@property (nonatomic) bool hasLoggedCollapsed;
@property (nonatomic) bool hasLoggedDeliveredCollapsed;
@property (nonatomic) bool hasLoggedDeliveredExpanded;
@property (nonatomic) bool hasLoggedExpanded;
@property (nonatomic) bool hasLoggedRemoval;
@property (nonatomic) bool hasLoggedUpcomingCollapsed;
@property (nonatomic) bool hasLoggedUpcomingExpanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXMissedNotificationRankingBiomeStream *loggingStream;
@property (nonatomic, copy) NSString *modeIdString;
@property (nonatomic, readonly) NSArray *rankedGroups;
@property (nonatomic, copy) NSString *rankerId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allNotificationIds;
- (double)creationTimestamp;
- (unsigned int)dataVersion;
- (id)digestEngagementTrackingMetrics;
- (id)digestTimeline;
- (bool)doesRankingShareContentWithOtherRanking:(id)arg1;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLoggedCollapsed;
- (bool)hasLoggedDeliveredCollapsed;
- (bool)hasLoggedDeliveredExpanded;
- (bool)hasLoggedExpanded;
- (bool)hasLoggedRemoval;
- (bool)hasLoggedUpcomingCollapsed;
- (bool)hasLoggedUpcomingExpanded;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroups:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;
- (id)initWithNotificationArrays:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2;
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)jsonRepresentation;
- (void)logCollapsedPreview;
- (void)logCollapsedViewWithIsUpcoming:(bool)arg1;
- (void)logExpandedViewWithIsUpcoming:(bool)arg1;
- (void)logRemoval;
- (void)logView;
- (id)loggingStream;
- (id)modeIdString;
- (id)proto;
- (id)rankedGroups;
- (id)rankerId;
- (id)serialize;
- (void)setDigestEngagementTrackingMetrics:(id)arg1;
- (void)setDigestTimeline:(id)arg1;
- (void)setHasLoggedCollapsed:(bool)arg1;
- (void)setHasLoggedDeliveredCollapsed:(bool)arg1;
- (void)setHasLoggedDeliveredExpanded:(bool)arg1;
- (void)setHasLoggedExpanded:(bool)arg1;
- (void)setHasLoggedRemoval:(bool)arg1;
- (void)setHasLoggedUpcomingCollapsed:(bool)arg1;
- (void)setHasLoggedUpcomingExpanded:(bool)arg1;
- (void)setLoggingStream:(id)arg1;
- (void)setModeIdString:(id)arg1;
- (void)setRankerId:(id)arg1;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)populateEngagementFromSource:(id)arg1;

@end
