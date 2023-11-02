
@interface ATXStackRotationSession : NSObject <NSSecureCoding> {
    bool  _completed;
    NSDate * _dwellStartDate;
    ATXHomeScreenEvent * _endingStackChangeEvent;
    unsigned long long  _engagementStatus;
    NSMutableArray * _engagementStatusHistory;
    bool  _isFirstNPlusOneRotation;
    bool  _isNPlusOneRotation;
    double  _longestDwell;
    ATXHomeScreenEvent * _startingStackChangeEvent;
    ATXSuggestionLayout * _systemSuggestSuggestionLayout;
}

@property (nonatomic, readonly) NSString *blendingCacheId;
@property (nonatomic) bool completed;
@property (nonatomic, retain) NSDate *dwellStartDate;
@property (nonatomic, readonly) ATXHomeScreenEvent *endingStackChangeEvent;
@property (nonatomic) unsigned long long engagementStatus;
@property (nonatomic, readonly) NSMutableArray *engagementStatusHistory;
@property (nonatomic) bool isFirstNPlusOneRotation;
@property (nonatomic) bool isNPlusOneRotation;
@property (nonatomic) double longestDwell;
@property (nonatomic, readonly) NSString *rotationReason;
@property (nonatomic, readonly) NSDate *sessionEndDate;
@property (nonatomic, readonly) NSDate *sessionStartDate;
@property (nonatomic, readonly) int stackLocation;
@property (nonatomic, readonly) ATXHomeScreenEvent *startingStackChangeEvent;
@property (nonatomic, readonly) ATXSuggestionLayout *systemSuggestSuggestionLayout;
@property (nonatomic, readonly) NSString *widgetBundleId;
@property (nonatomic, readonly) NSString *widgetKind;
@property (nonatomic, readonly) NSString *widgetUniqueId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheId;
- (bool)completed;
- (id)description;
- (id)dwellStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endingStackChangeEvent;
- (unsigned long long)engagementStatus;
- (id)engagementStatusHistory;
- (void)finalizeWithEndingStackChangeEvent:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingStackChangeEvent:(id)arg1;
- (id)initWithStartingStackChangeEvent:(id)arg1 endingStackChangeEvent:(id)arg2 engagementStatus:(unsigned long long)arg3 engagementStatusHistory:(id)arg4 systemSuggestSuggestionLayout:(id)arg5 dwellStartDate:(id)arg6 longestDwell:(double)arg7 isNPlusOneRotation:(bool)arg8 isFirstNPlusOneRotation:(bool)arg9 completed:(bool)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXStackRotationSession:(id)arg1;
- (bool)isFirstNPlusOneRotation;
- (bool)isNPlusOneRotation;
- (double)longestDwell;
- (void)markAddedToStack;
- (void)markRejectedRotationDismissOnce;
- (void)markRejectedRotationNeverShowAgain;
- (void)markStackHiddenAtDate:(id)arg1;
- (void)markStackShownAtDate:(id)arg1;
- (void)markStackTapped;
- (id)rotationReason;
- (id)sessionEndDate;
- (id)sessionStartDate;
- (void)setCompleted:(bool)arg1;
- (void)setDwellStartDate:(id)arg1;
- (void)setEngagementStatus:(unsigned long long)arg1;
- (void)setIsFirstNPlusOneRotation:(bool)arg1;
- (void)setIsNPlusOneRotation:(bool)arg1;
- (void)setLongestDwell:(double)arg1;
- (int)stackLocation;
- (id)startingStackChangeEvent;
- (id)systemSuggestSuggestionLayout;
- (void)tryUpdateStackRotationEngagementStatus:(unsigned long long)arg1;
- (void)updateIsNPlusOneRotation:(bool)arg1 isFirstNPlusOneRotation:(bool)arg2;
- (void)updateWithSystemSuggestSuggestionLayout:(id)arg1;
- (id)widgetBundleId;
- (id)widgetKind;
- (id)widgetUniqueId;

@end
