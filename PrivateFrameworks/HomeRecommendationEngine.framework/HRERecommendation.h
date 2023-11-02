
@interface HRERecommendation : NSObject <NSCopying> {
    NSMutableDictionary * _defaultAnalyticsData;
    HMHome * _home;
    double  _rankModifier;
    double  _rankingConfidenceScore;
    double  _sortingPriority;
    NSString * _uniqueIdentifier;
    NSMutableDictionary * _userInfo;
    HREIdentifierBuilder * identifierBuilder;
}

@property (nonatomic, readonly) NSDictionary *analyticsData;
@property (nonatomic, retain) NSMutableDictionary *defaultAnalyticsData;
@property (readonly) NADescriptionBuilder *descriptionBuilder;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) HFActionSetBuilder *hu_actionSetBuilderIfAny;
@property (readonly) HRERecommendation<HREActionRecommendation> *hu_asActionRecommendation;
@property (readonly) HREActionSetRecommendation *hu_asActionSetRecommendation;
@property (readonly) HRETriggerRecommendation *hu_asTriggerRecommendation;
@property (readonly) HFTriggerBuilder *hu_triggerBuilderIfAny;
@property (nonatomic, retain) HREIdentifierBuilder *identifierBuilder;
@property (nonatomic) unsigned long long numberOfEnabledRecommendationsForTemplate;
@property (nonatomic) double rankModifier;
@property (nonatomic, readonly) double rankingConfidenceScore;
@property (nonatomic, retain) HMRoom *room;
@property (nonatomic, readonly) NSArray *roomsToFilterHomeObjects;
@property (nonatomic) double sortingPriority;
@property (nonatomic, retain) HRETemplate *sourceTemplate;
@property (nonatomic, retain) HMCharacteristic *splitCharacteristic;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;
@property (nonatomic, retain) HMZone *zone;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

+ (id)highestRankInRecommendations:(id)arg1;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)changedInvolvedObjects;
- (bool)containsMeaningfulChanges;
- (bool)containsRecommendableContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAnalyticsData;
- (id)description;
- (id)descriptionBuilder;
- (id)home;
- (id)identifierBuilder;
- (bool)includesObjects:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)involvedObjects;
- (unsigned long long)numberOfEnabledRecommendationsForTemplate;
- (double)rankModifier;
- (double)rankingConfidenceScore;
- (id)room;
- (id)roomsToFilterHomeObjects;
- (void)setDefaultAnalyticsData:(id)arg1;
- (void)setIdentifierBuilder:(id)arg1;
- (void)setNumberOfEnabledRecommendationsForTemplate:(unsigned long long)arg1;
- (void)setRankModifier:(double)arg1;
- (void)setRankingConfidenceScore:(double)arg1 rankVersion:(long long)arg2;
- (void)setRoom:(id)arg1;
- (void)setSortingPriority:(double)arg1;
- (void)setSourceTemplate:(id)arg1;
- (void)setSplitCharacteristic:(id)arg1;
- (void)setZone:(id)arg1;
- (double)sortingPriority;
- (id)sourceTemplate;
- (id)splitCharacteristic;
- (id)splitUsingSplitCharacteristics:(id)arg1;
- (id)splitUsingSplitStrategy:(unsigned long long)arg1 inHome:(id)arg2;
- (id)uniqueIdentifier;
- (id)userInfo;
- (id)zone;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_actionSetBuilderIfAny;
- (id)hu_asActionRecommendation;
- (id)hu_asActionSetRecommendation;
- (id)hu_asTriggerRecommendation;
- (id)hu_triggerBuilderIfAny;

@end
