
@interface SGCustomResponsesParameters : NSObject {
    bool  _allowProfanity;
    unsigned long long  _compatibilityVersion;
    double  _countExponent;
    double  _distanceThreshold;
    unsigned long long  _filterBatchSize;
    bool  _isCustomResponsesEnabled;
    unsigned long long  _knowledgeStoreQueryLimit;
    double  _maxReplyGapSecs;
    unsigned long long  _maxReplyLength;
    unsigned long long  _maxRowsInPerRecipientTable;
    unsigned long long  _maxStoredCustomResponses;
    unsigned long long  _maxStoredMessages;
    double  _minDecayedCountForPrediction;
    double  _minDecayedCountForPruning;
    unsigned long long  _minimumDistinctRecipients;
    unsigned long long  _minimumReplyOccurences;
    double  _minimumTimeIntervalSecs;
    double  _timeDecayFactor;
    double  _usageSpreadExponent;
    bool  _useNonNegativeClassesOnly;
}

@property (nonatomic, readonly) bool allowProfanity;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (nonatomic, readonly) double countExponent;
@property (nonatomic, readonly) double distanceThreshold;
@property (nonatomic, readonly) unsigned long long filterBatchSize;
@property (nonatomic, readonly) bool isCustomResponsesEnabled;
@property (nonatomic, readonly) unsigned long long knowledgeStoreQueryLimit;
@property (nonatomic, readonly) double maxReplyGapSecs;
@property (nonatomic, readonly) unsigned long long maxReplyLength;
@property (nonatomic, readonly) unsigned long long maxRowsInPerRecipientTable;
@property (nonatomic, readonly) unsigned long long maxStoredCustomResponses;
@property (nonatomic, readonly) unsigned long long maxStoredMessages;
@property (nonatomic, readonly) double minDecayedCountForPrediction;
@property (nonatomic, readonly) double minDecayedCountForPruning;
@property (nonatomic, readonly) unsigned long long minimumDistinctRecipients;
@property (nonatomic, readonly) unsigned long long minimumReplyOccurences;
@property (nonatomic, readonly) double minimumTimeIntervalSecs;
@property (nonatomic, readonly) double timeDecayFactor;
@property (nonatomic, readonly) double usageSpreadExponent;
@property (nonatomic, readonly) bool useNonNegativeClassesOnly;

- (bool)allowProfanity;
- (unsigned long long)compatibilityVersion;
- (double)countExponent;
- (double)distanceThreshold;
- (unsigned long long)filterBatchSize;
- (id)initWithDictionary:(id)arg1;
- (bool)isCustomResponsesEnabled;
- (unsigned long long)knowledgeStoreQueryLimit;
- (double)maxReplyGapSecs;
- (unsigned long long)maxReplyLength;
- (unsigned long long)maxRowsInPerRecipientTable;
- (unsigned long long)maxStoredCustomResponses;
- (unsigned long long)maxStoredMessages;
- (double)minDecayedCountForPrediction;
- (double)minDecayedCountForPruning;
- (unsigned long long)minimumDistinctRecipients;
- (unsigned long long)minimumReplyOccurences;
- (double)minimumTimeIntervalSecs;
- (double)timeDecayFactor;
- (double)usageSpreadExponent;
- (bool)useNonNegativeClassesOnly;

@end
