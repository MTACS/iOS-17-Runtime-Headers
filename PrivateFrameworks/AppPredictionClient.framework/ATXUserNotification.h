
@interface ATXUserNotification : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, NSSecureCoding> {
    double  _appSpecifiedScore;
    long long  _attachmentType;
    unsigned long long  _badge;
    NSString * _body;
    NSString * _bundleID;
    NSString * _categoryID;
    NSArray * _contactIDs;
    ATXUserNotificationDerivedData * _derivedData;
    ATXSharedDigestEngagementTrackingMetrics * _digestEngagementTrackingMetrics;
    bool  _isGroupMessage;
    bool  _isMessage;
    NSArray * _rawIdentifiers;
    NSString * _sectionID;
    NSString * _subtitle;
    NSString * _threadID;
    double  _timestamp;
    NSString * _title;
    long long  _urgency;
    NSData * _userInfo;
    NSUUID * _uuid;
}

@property (nonatomic) double appSpecifiedScore;
@property (nonatomic) long long attachmentType;
@property (nonatomic) unsigned long long badge;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *categoryID;
@property (nonatomic, copy) NSArray *contactIDs;
@property (nonatomic, retain) ATXUserNotificationDerivedData *derivedData;
@property (nonatomic, retain) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (nonatomic) bool isGroupMessage;
@property (nonatomic) bool isMessage;
@property (nonatomic, copy) NSArray *rawIdentifiers;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *threadID;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long urgency;
@property (nonatomic, copy) NSData *userInfo;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)appSpecifiedScore;
- (long long)attachmentType;
- (unsigned long long)badge;
- (id)body;
- (id)bundleID;
- (id)categoryID;
- (long long)compareForDigestRanking:(id)arg1;
- (id)contactIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedData;
- (id)description;
- (id)digestEngagementTrackingMetrics;
- (id)digestRankingHardcodedComparisonValue;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (double)finalDigestScoreForMode:(id)arg1;
- (id)groupId;
- (bool)hasPreviewableAttachment;
- (id)initFromJSON:(id)arg1;
- (id)initFromNotificationData:(id)arg1 date:(id)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 bundleID:(id)arg6 threadID:(id)arg7 categoryID:(id)arg8;
- (id)initFromNotificationData:(id)arg1 timestamp:(double)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 badge:(unsigned long long)arg6 userInfo:(id)arg7 bundleID:(id)arg8 threadID:(id)arg9 categoryID:(id)arg10 derivedData:(id)arg11;
- (id)initFromNotificationData:(id)arg1 timestamp:(double)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 badge:(unsigned long long)arg6 userInfo:(id)arg7 bundleID:(id)arg8 threadID:(id)arg9 categoryID:(id)arg10 sectionID:(id)arg11 contactIDs:(id)arg12 isGroupMessage:(bool)arg13 derivedData:(id)arg14;
- (id)initFromNotificationData:(id)arg1 timestamp:(double)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 badge:(unsigned long long)arg6 userInfo:(id)arg7 bundleID:(id)arg8 threadID:(id)arg9 categoryID:(id)arg10 sectionID:(id)arg11 contactIDs:(id)arg12 isGroupMessage:(bool)arg13 derivedData:(id)arg14 urgency:(long long)arg15;
- (id)initFromNotificationData:(id)arg1 timestamp:(double)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 badge:(unsigned long long)arg6 userInfo:(id)arg7 bundleID:(id)arg8 threadID:(id)arg9 categoryID:(id)arg10 sectionID:(id)arg11 contactIDs:(id)arg12 rawIdentifiers:(id)arg13 isGroupMessage:(bool)arg14 derivedData:(id)arg15 urgency:(long long)arg16;
- (id)initFromNotificationData:(id)arg1 timestamp:(double)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 badge:(unsigned long long)arg6 userInfo:(id)arg7 bundleID:(id)arg8 threadID:(id)arg9 derivedData:(id)arg10;
- (id)initFromNotificationData:(id)arg1 timestamp:(double)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 badge:(unsigned long long)arg6 userInfo:(id)arg7 bundleID:(id)arg8 threadID:(id)arg9 sectionID:(id)arg10 contactIDs:(id)arg11 isGroupMessage:(bool)arg12 derivedData:(id)arg13 urgency:(long long)arg14;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUUID:(id)arg1 timestamp:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUserNotification:(id)arg1;
- (bool)isGroupMessage;
- (bool)isMessage;
- (id)jsonRepresentation;
- (id)proto;
- (id)rawIdentifiers;
- (id)sectionID;
- (void)setAppSpecifiedScore:(double)arg1;
- (void)setAttachmentType:(long long)arg1;
- (void)setBadge:(unsigned long long)arg1;
- (void)setBody:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setContactIDs:(id)arg1;
- (void)setDerivedData:(id)arg1;
- (void)setDigestEngagementTrackingMetrics:(id)arg1;
- (void)setIsGroupMessage:(bool)arg1;
- (void)setIsMessage:(bool)arg1;
- (void)setRawIdentifiers:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThreadID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrgency:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)subtitle;
- (id)threadID;
- (double)timestamp;
- (id)title;
- (long long)urgency;
- (id)userInfo;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)populateEngagementFromSource:(id)arg1 sectionIdentifier:(id)arg2 sectionPosition:(unsigned long long)arg3 sectionSize:(unsigned long long)arg4 digestTimeline:(id)arg5;
- (void)setRawIdentifiers;

@end
