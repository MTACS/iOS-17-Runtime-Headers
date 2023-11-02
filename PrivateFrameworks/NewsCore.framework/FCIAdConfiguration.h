
@interface FCIAdConfiguration : NSObject {
    NSDictionary * _adStatusConditionsByType;
    double  _articleNumberOfViewportsBetweenAds;
    NSDictionary * _configDict;
    double  _feedNumberOfViewportsBetweenAds;
    NSArray * _iAdSegmentIDs;
    NTPBIAdConfig * _pbConfig;
    bool  _preRequestPolicyValidationEnabled;
    bool  _segmentsEnabled;
    long long  _segmentsHistoryWindowInterval;
    double  _segmentsMinRelativeRate;
    long long  _segmentsMinimumArticleCount;
    long long  _segmentsMinimumEventCount;
    long long  _segmentsSubmissionFrequency;
    double  _segmentsThreshold;
}

@property (nonatomic, readonly) NSDictionary *adStatusConditionsByType;
@property (nonatomic, readonly) double articleNumberOfViewportsBetweenAds;
@property (nonatomic, readonly) double feedNumberOfViewportsBetweenAds;
@property (nonatomic, readonly) NSArray *iAdSegmentIDs;
@property (getter=isPreRequestPolicyValidationEnabled, nonatomic, readonly) bool preRequestPolicyValidationEnabled;
@property (getter=areSegmentsEnabled, nonatomic, readonly) bool segmentsEnabled;
@property (nonatomic, readonly) long long segmentsHistoryWindowInterval;
@property (nonatomic, readonly) double segmentsMinRelativeRate;
@property (nonatomic, readonly) long long segmentsMinimumArticleCount;
@property (nonatomic, readonly) long long segmentsMinimumEventCount;
@property (nonatomic, readonly) long long segmentsSubmissionFrequency;
@property (nonatomic, readonly) double segmentsThreshold;

- (void).cxx_destruct;
- (id)adStatusConditionsByType;
- (bool)areSegmentsEnabled;
- (double)articleNumberOfViewportsBetweenAds;
- (double)feedNumberOfViewportsBetweenAds;
- (unsigned long long)hash;
- (id)iAdSegmentIDs;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBIAdConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPreRequestPolicyValidationEnabled;
- (long long)segmentsHistoryWindowInterval;
- (double)segmentsMinRelativeRate;
- (long long)segmentsMinimumArticleCount;
- (long long)segmentsMinimumEventCount;
- (long long)segmentsSubmissionFrequency;
- (double)segmentsThreshold;

@end
