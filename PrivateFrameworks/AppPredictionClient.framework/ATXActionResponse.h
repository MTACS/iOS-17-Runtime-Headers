
@interface ATXActionResponse : NSObject <NSSecureCoding> {
    NSUUID * _blendingModelUICacheUpdateUUID;
    NSData * _cacheFileData;
    unsigned char  _consumerSubType;
    bool  _containsRouteInternal;
    NSDate * _donatedIntentDate;
    ATXAction * _engagedAction;
    NSString * _engagedAppString;
    NSError * _error;
    NSIndexSet * _explicitlyDismissedActionIndices;
    unsigned long long  _feedbackStage;
    ATXAction * _matchingIntentDonatedAction;
    bool  _matchingIntentWasCompleteMatch;
    NSDate * _predictionDate;
    NSArray * _proactiveSuggestions;
    NSArray * _scoredActions;
    unsigned long long  _searchedActionType;
    NSIndexSet * _shownActionIndices;
    NSArray * _shownActionsCache;
    NSDate * _uiFeedbackDate;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSUUID *blendingModelUICacheUpdateUUID;
@property (nonatomic, readonly) NSData *cacheFileData;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) NSDate *donatedIntentDate;
@property (nonatomic, readonly) ATXAction *engagedAction;
@property (nonatomic, readonly) NSString *engagedAppString;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *explicitlyDismissedActions;
@property (nonatomic, readonly) unsigned long long feedbackStage;
@property (nonatomic, readonly) ATXAction *matchingIntentDonatedAction;
@property (nonatomic, readonly) bool matchingIntentWasCompleteMatch;
@property (nonatomic, readonly) NSDate *predictionDate;
@property (nonatomic, readonly) NSArray *proactiveSuggestions;
@property (nonatomic, readonly) NSArray *scoredActions;
@property (nonatomic, readonly) unsigned long long searchedActionType;
@property (nonatomic, readonly) NSArray *shownActions;
@property (nonatomic, readonly) NSDate *uiFeedbackDate;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)blendingModelUICacheUpdateUUID;
- (id)cacheFileData;
- (unsigned char)consumerSubType;
- (bool)containsExternalRoute;
- (id)donatedIntentDate;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedAction;
- (id)engagedAppString;
- (id)error;
- (id)explicitlyDismissedActions;
- (unsigned long long)feedbackStage;
- (unsigned long long)hash;
- (bool)indexWasShown:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProactiveSuggestions:(id)arg1 blendingModelUICacheUpdateUUID:(id)arg2 consumerSubType:(unsigned char)arg3 error:(id)arg4;
- (id)initWithScoredActions:(id)arg1 cacheFileData:(id)arg2 consumerSubType:(unsigned char)arg3 error:(id)arg4;
- (id)initWithScoredActions:(id)arg1 cacheFileData:(id)arg2 proactiveSuggestions:(id)arg3 blendingModelUICacheUpdateUUID:(id)arg4 consumerSubType:(unsigned char)arg5 predictionDate:(id)arg6 error:(id)arg7;
- (bool)isActionSpotlightCaptureRateAppEngagementType;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionResponse:(id)arg1;
- (id)json;
- (id)jsonData;
- (id)jsonDescription;
- (id)matchingIntentDonatedAction;
- (bool)matchingIntentWasCompleteMatch;
- (id)predictionDate;
- (id)proactiveSuggestions;
- (id)routeDestinationTypeString;
- (id)scoredActions;
- (unsigned long long)searchedActionType;
- (void)setContainsExternalRoute:(bool)arg1;
- (id)shownActions;
- (id)uiFeedbackDate;
- (void)updateConsumerSubType:(unsigned char)arg1 engagedAction:(id)arg2 shownActions:(id)arg3 feedbackStage:(unsigned long long)arg4 explicitlyDismissedActions:(id)arg5 searchedActionType:(unsigned long long)arg6 engagedAppString:(id)arg7 uiFeedbackDate:(id)arg8;
- (void)updateWithMatchingIntentDonatedAction:(id)arg1 intentDonationDate:(id)arg2 matchingIntentWasCompleteMatch:(bool)arg3;
- (id)uuid;

@end
