
@interface BBBulletinRequest : BBBulletin {
    unsigned long long  _expirationEvents;
}

@property (nonatomic, retain) BBAccessoryIcon *accessoryIconMask;
@property (nonatomic, retain) BBImage *accessoryImage;
@property (nonatomic, copy) BBAction *acknowledgeAction;
@property (nonatomic, copy) NSArray *additionalAttachments;
@property (nonatomic, copy) NSSet *alertSuppressionAppIDs_deprecated;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, copy) BBAction *alternateAction;
@property (nonatomic) long long backgroundStyle;
@property (readonly) BLTPBBulletin *blt_protobuf;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, copy) NSString *categoryID;
@property (nonatomic) bool clearable;
@property (nonatomic, retain) BBCommunicationContext *communicationContext;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic) unsigned long long counter;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic) bool dateIsAllDay;
@property (nonatomic, copy) BBAction *defaultAction;
@property (nonatomic, copy) BBAction *dismissAction;
@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic) bool displaysActionsInline;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned long long expirationEvents;
@property (nonatomic, copy) BBAction *expireAction;
@property (nonatomic) bool expiresOnPublisherDeath;
@property (nonatomic, copy) NSString *filterCriteria;
@property (nonatomic, copy) BBAction *followActivityAction;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic) bool hasCriticalIcon;
@property (nonatomic) bool hasEventDate;
@property (nonatomic) bool hasSubordinateIcon;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, retain) BBSectionIcon *icon;
@property (nonatomic) bool ignoresDowntime;
@property (nonatomic) bool ignoresQuietMode;
@property (nonatomic, copy) NSArray *intentIDs;
@property (nonatomic) unsigned long long interruptionLevel;
@property (nonatomic, retain) NSDate *lastInterruptDate;
@property (nonatomic, copy) BBAction *launchSessionAction;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic) long long lockScreenPriority;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) BBContent *modalAlertContent;
@property (nonatomic, copy) NSString *parentSectionID;
@property (nonatomic, copy) NSArray *peopleIDs;
@property (nonatomic) bool preemptsPresentedAlert;
@property (nonatomic) bool preventAutomaticRemovalFromLockScreen;
@property (nonatomic, copy) BBAttachmentMetadata *primaryAttachment;
@property (nonatomic) long long primaryAttachmentType;
@property (nonatomic, retain) NSDate *publicationDate;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) BBAction *raiseAction;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic, retain) NSDate *recencyDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic) float relevanceScore;
@property (nonatomic) bool screenCaptureProhibited;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, copy) NSString *sectionBundlePath;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic) long long sectionSubtype;
@property (nonatomic) bool showsUnreadIndicator;
@property (nonatomic, copy) BBAction *silenceAction;
@property (nonatomic, copy) BBAction *snoozeAction;
@property (nonatomic, retain) BBSound *sound;
@property (nonatomic, retain) BBContent *starkBannerContent;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (nonatomic, copy) NSArray *supplementaryActions;
@property (nonatomic) bool tentative;
@property (nonatomic, copy) NSString *threadID;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool turnsOnDisplay;
@property (nonatomic, copy) NSString *universalSectionID;
@property (nonatomic, copy) NSString *unlockActionLabelOverride;
@property (nonatomic) bool usesExternalSync;
@property (nonatomic) bool wantsFullscreenPresentation;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

- (void)_updateSupplementaryAction:(id)arg1;
- (void)addAlertSuppressionAppID:(id)arg1;
- (void)addAttachmentOfType:(long long)arg1;
- (void)addButton:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned long long)expirationEvents;
- (void)generateBulletinID;
- (void)generateNewBulletinID;
- (bool)hasAdditionalAttachmentsModificationsRelativeTo:(id)arg1;
- (bool)hasContentModificationsRelativeTo:(id)arg1;
- (void)publish;
- (void)publish:(bool)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setExpirationEvents:(unsigned long long)arg1;
- (void)setPrimaryAttachmentType:(long long)arg1;
- (void)setShowsUnreadIndicator:(bool)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setSupplementaryActions:(id)arg1 forLayout:(long long)arg2;
- (void)setTentative:(bool)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (bool)showsUnreadIndicator;
- (bool)tentative;
- (void)withdraw;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)_actionFromBLTPBAction:(id)arg1;
+ (id)bulletinRequestFromProtobuf:(id)arg1;
+ (id)plistTypes;

- (id)blt_protobuf;

@end
