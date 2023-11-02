
@interface NTPBIAdConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int segmentsHistoryWindowInterval : 1; 
        unsigned int segmentsMinimumArticleCount : 1; 
        unsigned int segmentsSubmissionFrequency : 1; 
        unsigned int segmentsThreshold : 1; 
        unsigned int segmentsEnabled : 1; 
    }  _has;
    bool  _segmentsEnabled;
    long long  _segmentsHistoryWindowInterval;
    long long  _segmentsMinimumArticleCount;
    long long  _segmentsSubmissionFrequency;
    double  _segmentsThreshold;
}

@property (nonatomic) bool hasSegmentsEnabled;
@property (nonatomic) bool hasSegmentsHistoryWindowInterval;
@property (nonatomic) bool hasSegmentsMinimumArticleCount;
@property (nonatomic) bool hasSegmentsSubmissionFrequency;
@property (nonatomic) bool hasSegmentsThreshold;
@property (nonatomic) bool segmentsEnabled;
@property (nonatomic) long long segmentsHistoryWindowInterval;
@property (nonatomic) long long segmentsMinimumArticleCount;
@property (nonatomic) long long segmentsSubmissionFrequency;
@property (nonatomic) double segmentsThreshold;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSegmentsEnabled;
- (bool)hasSegmentsHistoryWindowInterval;
- (bool)hasSegmentsMinimumArticleCount;
- (bool)hasSegmentsSubmissionFrequency;
- (bool)hasSegmentsThreshold;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)segmentsEnabled;
- (long long)segmentsHistoryWindowInterval;
- (long long)segmentsMinimumArticleCount;
- (long long)segmentsSubmissionFrequency;
- (double)segmentsThreshold;
- (void)setHasSegmentsEnabled:(bool)arg1;
- (void)setHasSegmentsHistoryWindowInterval:(bool)arg1;
- (void)setHasSegmentsMinimumArticleCount:(bool)arg1;
- (void)setHasSegmentsSubmissionFrequency:(bool)arg1;
- (void)setHasSegmentsThreshold:(bool)arg1;
- (void)setSegmentsEnabled:(bool)arg1;
- (void)setSegmentsHistoryWindowInterval:(long long)arg1;
- (void)setSegmentsMinimumArticleCount:(long long)arg1;
- (void)setSegmentsSubmissionFrequency:(long long)arg1;
- (void)setSegmentsThreshold:(double)arg1;
- (void)writeTo:(id)arg1;

@end