
@interface _CDInteraction : NSObject <BMStoreData, NSSecureCoding, _CDInteractionOrUncachedSentinel, _CDPDataPoint> {
    NSString * _account;
    NSArray * _attachments;
    NSString * _bundleId;
    NSURL * _contentURL;
    NSString * _derivedIntentIdentifier;
    long long  _direction;
    NSString * _domainIdentifier;
    NSDate * _endDate;
    bool  _forcePersistInteraction;
    NSString * _groupName;
    bool  _isResponse;
    NSArray * _keywords;
    NSString * _locationUUID;
    bool  _mailShareSheetDeletionCandidate;
    long long  _mechanism;
    NSString * _nsUserName;
    id  _recipients;
    long long  _selfParticipantStatus;
    _CDContact * _sender;
    NSDate * _startDate;
    NSString * _targetBundleId;
    NSDate * _updateDate;
    NSString * _uuid;
}

@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) NSURL *contentURL;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *derivedIntentIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) bool forcePersistInteraction;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isResponse;
@property (nonatomic, copy) NSArray *keywords;
@property (retain) NSDate *lh_startDate;
@property (nonatomic, copy) NSString *locationUUID;
@property (nonatomic) bool mailShareSheetDeletionCandidate;
@property (nonatomic) long long mechanism;
@property (nonatomic, copy) NSString *nsUserName;
@property (nonatomic, readonly) NSArray *peopleIdentifiers;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic) long long selfParticipantStatus;
@property (nonatomic, retain) _CDContact *sender;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetBundleId;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSDate *updateDate;
@property (nonatomic, readonly) bool userIsSender;
@property (nonatomic, readonly) bool userIsThreadInitiator;
@property (nonatomic, copy) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)_internPool;
+ (id)generateConversationIdFromHandle:(id)arg1;
+ (id)generateConversationIdFromInteractionRecipients:(id)arg1;
+ (id)recipientIdentifiersFromMobileMailConversationId:(id)arg1;
+ (id)shareSheetInteractionFromINInteraction:(id)arg1 bundleID:(id)arg2 nsUserName:(id)arg3 knowledgeStore:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)attachments;
- (id)bundleId;
- (id)contentURL;
- (id)dateInterval;
- (id)derivedIntentIdentifier;
- (id)description;
- (id)descriptionOfArray:(id)arg1;
- (long long)direction;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (void)fetchAndAddShareSheetContentToInteractionWithKnowledgeStore:(id)arg1;
- (bool)forcePersistInteraction;
- (id)groupName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithINInteraction:(id)arg1 bundleID:(id)arg2 nsUserName:(id)arg3;
- (id)interactionIfCached;
- (bool)isEqual:(id)arg1;
- (bool)isGroupChat;
- (bool)isInteractionMechanismCalls;
- (bool)isResponse;
- (bool)isUncachedSentinel;
- (bool)isValidInteraction;
- (id)keywords;
- (id)locationUUID;
- (bool)mailShareSheetDeletionCandidate;
- (long long)mechanism;
- (id)nsUserName;
- (id)peopleIdentifiers;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (long long)selfParticipantStatus;
- (id)sender;
- (void)setAccount:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDerivedIntentIdentifier:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setForcePersistInteraction:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setMailShareSheetDeletionCandidate:(bool)arg1;
- (void)setMechanism:(long long)arg1;
- (void)setNsUserName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSelfParticipantStatus:(long long)arg1;
- (void)setSender:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTargetBundleId:(id)arg1;
- (void)setUpdateDate:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)startDate;
- (id)targetBundleId;
- (id)timestamp;
- (id)title;
- (id)updateDate;
- (bool)userIsSender;
- (bool)userIsThreadInitiator;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)serialize;

// Image: /System/Library/PrivateFrameworks/ProactiveShareSheetDataHarvestingLighthouse.framework/ProactiveShareSheetDataHarvestingLighthouse

+ (id)lh_init;

- (bool)lh_isGroupChat;
- (id)lh_startDate;
- (void)setLh_startDate:(id)arg1;

@end
