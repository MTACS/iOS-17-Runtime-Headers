
@interface SGSuggestedActionMetrics : NSObject {
    SGMContactConfirmed * _contactConfirmed;
    SGMContactDetailConfirmed * _contactDetailConfirmed;
    SGMContactDetailConversationTurn * _contactDetailConversationTurn;
    SGMContactDetailRejected * _contactDetailRejected;
    SGMContactDetailUsed * _contactDetailUsed;
    SGMContactInBanner * _contactInBanner;
    SGMContactRejected * _contactRejected;
    SGMEventBannerConfirmed * _eventBannerConfirmed;
    SGMEventBannerRejected * _eventBannerRejected;
    SGMEventInBanner * _eventInBanner;
    SGMMaybeInformationShown * _maybeInformationShown;
    SGMUnknownContactInformationShown * _unknownContactInformationShown;
}

@property (nonatomic, retain) SGMContactConfirmed *contactConfirmed;
@property (nonatomic, retain) SGMContactDetailConfirmed *contactDetailConfirmed;
@property (nonatomic, retain) SGMContactDetailConversationTurn *contactDetailConversationTurn;
@property (nonatomic, retain) SGMContactDetailRejected *contactDetailRejected;
@property (nonatomic, retain) SGMContactDetailUsed *contactDetailUsed;
@property (nonatomic, retain) SGMContactInBanner *contactInBanner;
@property (nonatomic, retain) SGMContactRejected *contactRejected;
@property (nonatomic, retain) SGMEventBannerConfirmed *eventBannerConfirmed;
@property (nonatomic, retain) SGMEventBannerRejected *eventBannerRejected;
@property (nonatomic, retain) SGMEventInBanner *eventInBanner;
@property (nonatomic, retain) SGMMaybeInformationShown *maybeInformationShown;
@property (nonatomic, retain) SGMUnknownContactInformationShown *unknownContactInformationShown;

+ (id)instance;
+ (void)recordBannerConfirmedWithContact:(id)arg1 proposedCNContact:(id)arg2 confirmedCNContact:(id)arg3 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg4 confirmationUI:(int)arg5 pet2Tracker:(id)arg6;
+ (void)recordBannerConfirmedWithEvent:(id)arg1 proposedEKEvent:(id)arg2 confirmedEKEvent:(id)arg3 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg4;
+ (void)recordBannerRejectedWithEvent:(id)arg1 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg2;
+ (void)recordBannerShownWithContacts:(id)arg1 events:(id)arg2 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg3;
+ (void)recordContactDetailEngagementWithResolution:(long long)arg1 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg2 extractionType:(unsigned long long)arg3 modelVersion:(id)arg4 confirmRejectUI:(int)arg5 pet2Tracker:(id)arg6;
+ (void)recordContactDetailUsage:(id)arg1 withApp:(id)arg2;
+ (void)recordConversationTurnWithContact:(id)arg1 received:(bool)arg2 curated:(bool)arg3 throughApp:(id)arg4 withDetailName:(id)arg5 withDetailExtraction:(id)arg6;
+ (void)recordMaybeContactFrom:(unsigned long long)arg1 withVersion:(id)arg2;
+ (void)recordRejectedContact:(id)arg1 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg2 rejectionUI:(int)arg3 pet2Tracker:(id)arg4;

- (void).cxx_destruct;
- (id)contactConfirmed;
- (id)contactDetailConfirmed;
- (id)contactDetailConversationTurn;
- (id)contactDetailRejected;
- (id)contactDetailUsed;
- (id)contactInBanner;
- (id)contactRejected;
- (id)eventBannerConfirmed;
- (id)eventBannerRejected;
- (id)eventInBanner;
- (id)init;
- (id)maybeInformationShown;
- (void)setContactConfirmed:(id)arg1;
- (void)setContactDetailConfirmed:(id)arg1;
- (void)setContactDetailConversationTurn:(id)arg1;
- (void)setContactDetailRejected:(id)arg1;
- (void)setContactDetailUsed:(id)arg1;
- (void)setContactInBanner:(id)arg1;
- (void)setContactRejected:(id)arg1;
- (void)setEventBannerConfirmed:(id)arg1;
- (void)setEventBannerRejected:(id)arg1;
- (void)setEventInBanner:(id)arg1;
- (void)setMaybeInformationShown:(id)arg1;
- (void)setUnknownContactInformationShown:(id)arg1;
- (id)unknownContactInformationShown;

@end
