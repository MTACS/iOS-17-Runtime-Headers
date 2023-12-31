
@interface NTPBAudioEngage : PBCodable <NSCopying> {
    bool  _adSupportedChannel;
    double  _agedPersonalizationScore;
    double  _agedUserFeedbackScore;
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    long long  _audioDeltaTimePlayed;
    int  _audioEngagementOriginationData;
    long long  _audioTimePlayed;
    double  _autoSubscribeCtr;
    NTPBChannelData * _channelData;
    double  _computedGlobalScoreCoefficient;
    double  _diversifiedPersonalizationScore;
    NSString * _engagementId;
    double  _featureCtr;
    NSString * _feedId;
    int  _feedType;
    NSMutableArray * _fractionalCohortMemberships;
    double  _globalScore;
    NSString * _groupFeedId;
    int  _groupType;
    NSData * _groupViewExposureId;
    struct { 
        unsigned int agedPersonalizationScore : 1; 
        unsigned int agedUserFeedbackScore : 1; 
        unsigned int audioDeltaTimePlayed : 1; 
        unsigned int audioTimePlayed : 1; 
        unsigned int autoSubscribeCtr : 1; 
        unsigned int computedGlobalScoreCoefficient : 1; 
        unsigned int diversifiedPersonalizationScore : 1; 
        unsigned int featureCtr : 1; 
        unsigned int globalScore : 1; 
        unsigned int paidNonpaidSubscriptionCtr : 1; 
        unsigned int personalizationScore : 1; 
        unsigned int subscribedChannelCtr : 1; 
        unsigned int trackDuration : 1; 
        unsigned int userFeedbackScore : 1; 
        unsigned int audioEngagementOriginationData : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int listeningSource : 1; 
        unsigned int playMethod : 1; 
        unsigned int playbackSpeed : 1; 
        unsigned int position : 1; 
        unsigned int trackVariant : 1; 
        unsigned int userAction : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int isPaidSubscriberToSourceChannel : 1; 
    }  _has;
    bool  _isPaidSubscriberToSourceChannel;
    NTPBIssueData * _issueData;
    NTPBIssueViewData * _issueViewData;
    NSString * _language;
    int  _listeningSource;
    double  _paidNonpaidSubscriptionCtr;
    double  _personalizationScore;
    int  _playMethod;
    float  _playbackSpeed;
    int  _position;
    NSString * _sourceChannelId;
    double  _subscribedChannelCtr;
    long long  _trackDuration;
    int  _trackVariant;
    int  _userAction;
    double  _userFeedbackScore;
}

@property (nonatomic) bool adSupportedChannel;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) long long audioDeltaTimePlayed;
@property (nonatomic) int audioEngagementOriginationData;
@property (nonatomic) long long audioTimePlayed;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic, retain) NTPBChannelData *channelData;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic, retain) NSString *engagementId;
@property (nonatomic) double featureCtr;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) double globalScore;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic, retain) NSData *groupViewExposureId;
@property (nonatomic) bool hasAdSupportedChannel;
@property (nonatomic) bool hasAgedPersonalizationScore;
@property (nonatomic) bool hasAgedUserFeedbackScore;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasAudioDeltaTimePlayed;
@property (nonatomic) bool hasAudioEngagementOriginationData;
@property (nonatomic) bool hasAudioTimePlayed;
@property (nonatomic) bool hasAutoSubscribeCtr;
@property (nonatomic, readonly) bool hasChannelData;
@property (nonatomic) bool hasComputedGlobalScoreCoefficient;
@property (nonatomic) bool hasDiversifiedPersonalizationScore;
@property (nonatomic, readonly) bool hasEngagementId;
@property (nonatomic) bool hasFeatureCtr;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic) bool hasGlobalScore;
@property (nonatomic, readonly) bool hasGroupFeedId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic, readonly) bool hasGroupViewExposureId;
@property (nonatomic) bool hasIsPaidSubscriberToSourceChannel;
@property (nonatomic, readonly) bool hasIssueData;
@property (nonatomic, readonly) bool hasIssueViewData;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasListeningSource;
@property (nonatomic) bool hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) bool hasPersonalizationScore;
@property (nonatomic) bool hasPlayMethod;
@property (nonatomic) bool hasPlaybackSpeed;
@property (nonatomic) bool hasPosition;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasSubscribedChannelCtr;
@property (nonatomic) bool hasTrackDuration;
@property (nonatomic) bool hasTrackVariant;
@property (nonatomic) bool hasUserAction;
@property (nonatomic) bool hasUserFeedbackScore;
@property (nonatomic) bool isPaidSubscriberToSourceChannel;
@property (nonatomic, retain) NTPBIssueData *issueData;
@property (nonatomic, retain) NTPBIssueViewData *issueViewData;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) int listeningSource;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double personalizationScore;
@property (nonatomic) int playMethod;
@property (nonatomic) float playbackSpeed;
@property (nonatomic) int position;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) long long trackDuration;
@property (nonatomic) int trackVariant;
@property (nonatomic) int userAction;
@property (nonatomic) double userFeedbackScore;

+ (Class)fractionalCohortMembershipType;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsTrackVariant:(id)arg1;
- (bool)adSupportedChannel;
- (void)addFractionalCohortMembership:(id)arg1;
- (double)agedPersonalizationScore;
- (double)agedUserFeedbackScore;
- (id)articleId;
- (id)articleViewingSessionId;
- (long long)audioDeltaTimePlayed;
- (int)audioEngagementOriginationData;
- (long long)audioTimePlayed;
- (double)autoSubscribeCtr;
- (id)channelData;
- (void)clearFractionalCohortMemberships;
- (double)computedGlobalScoreCoefficient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)diversifiedPersonalizationScore;
- (id)engagementId;
- (double)featureCtr;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (id)fractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (double)globalScore;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (id)groupViewExposureId;
- (bool)hasAdSupportedChannel;
- (bool)hasAgedPersonalizationScore;
- (bool)hasAgedUserFeedbackScore;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasAudioDeltaTimePlayed;
- (bool)hasAudioEngagementOriginationData;
- (bool)hasAudioTimePlayed;
- (bool)hasAutoSubscribeCtr;
- (bool)hasChannelData;
- (bool)hasComputedGlobalScoreCoefficient;
- (bool)hasDiversifiedPersonalizationScore;
- (bool)hasEngagementId;
- (bool)hasFeatureCtr;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasGlobalScore;
- (bool)hasGroupFeedId;
- (bool)hasGroupType;
- (bool)hasGroupViewExposureId;
- (bool)hasIsPaidSubscriberToSourceChannel;
- (bool)hasIssueData;
- (bool)hasIssueViewData;
- (bool)hasLanguage;
- (bool)hasListeningSource;
- (bool)hasPaidNonpaidSubscriptionCtr;
- (bool)hasPersonalizationScore;
- (bool)hasPlayMethod;
- (bool)hasPlaybackSpeed;
- (bool)hasPosition;
- (bool)hasSourceChannelId;
- (bool)hasSubscribedChannelCtr;
- (bool)hasTrackDuration;
- (bool)hasTrackVariant;
- (bool)hasUserAction;
- (bool)hasUserFeedbackScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPaidSubscriberToSourceChannel;
- (id)issueData;
- (id)issueViewData;
- (id)language;
- (int)listeningSource;
- (void)mergeFrom:(id)arg1;
- (double)paidNonpaidSubscriptionCtr;
- (double)personalizationScore;
- (int)playMethod;
- (float)playbackSpeed;
- (int)position;
- (bool)readFrom:(id)arg1;
- (void)setAdSupportedChannel:(bool)arg1;
- (void)setAgedPersonalizationScore:(double)arg1;
- (void)setAgedUserFeedbackScore:(double)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setAudioDeltaTimePlayed:(long long)arg1;
- (void)setAudioEngagementOriginationData:(int)arg1;
- (void)setAudioTimePlayed:(long long)arg1;
- (void)setAutoSubscribeCtr:(double)arg1;
- (void)setChannelData:(id)arg1;
- (void)setComputedGlobalScoreCoefficient:(double)arg1;
- (void)setDiversifiedPersonalizationScore:(double)arg1;
- (void)setEngagementId:(id)arg1;
- (void)setFeatureCtr:(double)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFractionalCohortMemberships:(id)arg1;
- (void)setGlobalScore:(double)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setGroupViewExposureId:(id)arg1;
- (void)setHasAdSupportedChannel:(bool)arg1;
- (void)setHasAgedPersonalizationScore:(bool)arg1;
- (void)setHasAgedUserFeedbackScore:(bool)arg1;
- (void)setHasAudioDeltaTimePlayed:(bool)arg1;
- (void)setHasAudioEngagementOriginationData:(bool)arg1;
- (void)setHasAudioTimePlayed:(bool)arg1;
- (void)setHasAutoSubscribeCtr:(bool)arg1;
- (void)setHasComputedGlobalScoreCoefficient:(bool)arg1;
- (void)setHasDiversifiedPersonalizationScore:(bool)arg1;
- (void)setHasFeatureCtr:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasGlobalScore:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasIsPaidSubscriberToSourceChannel:(bool)arg1;
- (void)setHasListeningSource:(bool)arg1;
- (void)setHasPaidNonpaidSubscriptionCtr:(bool)arg1;
- (void)setHasPersonalizationScore:(bool)arg1;
- (void)setHasPlayMethod:(bool)arg1;
- (void)setHasPlaybackSpeed:(bool)arg1;
- (void)setHasPosition:(bool)arg1;
- (void)setHasSubscribedChannelCtr:(bool)arg1;
- (void)setHasTrackDuration:(bool)arg1;
- (void)setHasTrackVariant:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setHasUserFeedbackScore:(bool)arg1;
- (void)setIsPaidSubscriberToSourceChannel:(bool)arg1;
- (void)setIssueData:(id)arg1;
- (void)setIssueViewData:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setListeningSource:(int)arg1;
- (void)setPaidNonpaidSubscriptionCtr:(double)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setPlayMethod:(int)arg1;
- (void)setPlaybackSpeed:(float)arg1;
- (void)setPosition:(int)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSubscribedChannelCtr:(double)arg1;
- (void)setTrackDuration:(long long)arg1;
- (void)setTrackVariant:(int)arg1;
- (void)setUserAction:(int)arg1;
- (void)setUserFeedbackScore:(double)arg1;
- (id)sourceChannelId;
- (double)subscribedChannelCtr;
- (long long)trackDuration;
- (int)trackVariant;
- (id)trackVariantAsString:(int)arg1;
- (int)userAction;
- (double)userFeedbackScore;
- (void)writeTo:(id)arg1;

@end
