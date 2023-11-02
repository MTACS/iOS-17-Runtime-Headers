
@interface ATXUserNotificationDigestNotificationGroup : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, NSSecureCoding> {
    ATXSharedDigestEngagementTrackingMetrics * _digestEngagementTrackingMetrics;
    NSString * _groupDescription;
    NSString * _groupId;
    double  _priority;
    NSArray * _rankedNotifications;
    NSUUID * _representativeNotificationUUID;
    NSString * _title;
}

@property (nonatomic, readonly) double appSpecifiedScore;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, retain) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (nonatomic, copy) NSString *groupDescription;
@property (nonatomic, readonly) NSString *groupId;
@property (nonatomic) double priority;
@property (nonatomic, readonly) NSArray *rankedNotifications;
@property (nonatomic, retain) NSUUID *representativeNotificationUUID;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)groupsFromNotifications:(id)arg1 modeId:(id)arg2;
+ (id)groupsFromProtos:(id)arg1;
+ (id)protosFromGroups:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)appSpecifiedScore;
- (id)bundleId;
- (id)digestEngagementTrackingMetrics;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)groupDescription;
- (id)groupId;
- (bool)hasPreviewableAttachment;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotifications:(id)arg1;
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2;
- (id)initWithNotifications:(id)arg1 useDigestOrder:(bool)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isCommunicationGroup;
- (id)jsonRepresentation;
- (double)priority;
- (id)proto;
- (id)rankedNotifications;
- (id)representativeNotificationUUID;
- (void)setDigestEngagementTrackingMetrics:(id)arg1;
- (void)setGroupDescription:(id)arg1;
- (void)setPriority:(double)arg1;
- (void)setRepresentativeNotificationUUID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)populateEngagementFromSource:(id)arg1 sectionIdentifier:(id)arg2 sectionPosition:(unsigned long long)arg3 sectionSize:(unsigned long long)arg4 digestTimeline:(id)arg5;

@end
