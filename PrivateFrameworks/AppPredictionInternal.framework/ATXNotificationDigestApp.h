
@interface ATXNotificationDigestApp : NSObject {
    double  _appScore;
    NSString * _bundleId;
    ATXNotificationDigestRankingConstants * _c;
    <ATXNotificationDigestFeedbackProtocol> * _digestFeedback;
    bool  _hasBeenChosenForMarquee;
    bool  _isEligibleForAutomaticMarquee;
    NSArray * _orderedGroups;
    NSMutableArray * _rawGroups;
}

@property (nonatomic, readonly) double appScore;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic) bool hasBeenChosenForMarquee;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool isEligibleForAutomaticMarquee;
@property (nonatomic, readonly) NSArray *orderedGroups;
@property (nonatomic, readonly) NSArray *unorderedGroups;

- (void).cxx_destruct;
- (void)addGroup:(id)arg1;
- (double)appScore;
- (id)bundleId;
- (bool)hasBeenChosenForMarquee;
- (bool)hasImage;
- (id)initWithBundleId:(id)arg1 digestFeedback:(id)arg2 digestConstants:(id)arg3;
- (bool)isEligibleForAutomaticMarquee;
- (double)logisticScoreForInput:(double)arg1;
- (id)orderedGroups;
- (void)populateScoresFromBundleId;
- (void)refreshGroupOrder;
- (void)setHasBeenChosenForMarquee:(bool)arg1;
- (id)unorderedGroups;

@end
