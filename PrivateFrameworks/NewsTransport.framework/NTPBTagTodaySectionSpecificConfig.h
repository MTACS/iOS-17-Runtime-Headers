
@interface NTPBTagTodaySectionSpecificConfig : PBCodable <NSCopying> {
    unsigned long long  _cutoffTime;
    int  _fetchingBin;
    struct { 
        unsigned int cutoffTime : 1; 
        unsigned int headlinesPerFeedFetchCount : 1; 
        unsigned int minimumUpdateInterval : 1; 
        unsigned int fetchingBin : 1; 
    }  _has;
    unsigned long long  _headlinesPerFeedFetchCount;
    unsigned long long  _minimumUpdateInterval;
    NSString * _tagID;
}

@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) int fetchingBin;
@property (nonatomic) bool hasCutoffTime;
@property (nonatomic) bool hasFetchingBin;
@property (nonatomic) bool hasHeadlinesPerFeedFetchCount;
@property (nonatomic) bool hasMinimumUpdateInterval;
@property (nonatomic, readonly) bool hasTagID;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long minimumUpdateInterval;
@property (nonatomic, retain) NSString *tagID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cutoffTime;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fetchingBin;
- (bool)hasCutoffTime;
- (bool)hasFetchingBin;
- (bool)hasHeadlinesPerFeedFetchCount;
- (bool)hasMinimumUpdateInterval;
- (bool)hasTagID;
- (unsigned long long)hash;
- (unsigned long long)headlinesPerFeedFetchCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)minimumUpdateInterval;
- (bool)readFrom:(id)arg1;
- (void)setCutoffTime:(unsigned long long)arg1;
- (void)setFetchingBin:(int)arg1;
- (void)setHasCutoffTime:(bool)arg1;
- (void)setHasFetchingBin:(bool)arg1;
- (void)setHasHeadlinesPerFeedFetchCount:(bool)arg1;
- (void)setHasMinimumUpdateInterval:(bool)arg1;
- (void)setHeadlinesPerFeedFetchCount:(unsigned long long)arg1;
- (void)setMinimumUpdateInterval:(unsigned long long)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;
- (void)writeTo:(id)arg1;

@end
