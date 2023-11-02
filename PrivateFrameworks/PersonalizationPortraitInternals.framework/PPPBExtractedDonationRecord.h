
@interface PPPBExtractedDonationRecord : PBCodable <NSCopying> {
    NSString * _algorithm;
    struct { 
        unsigned int score : 1; 
        unsigned int topicId : 1; 
        unsigned int unixTimestampSec : 1; 
    }  _has;
    NSString * _namedEntity;
    double  _score;
    NSString * _sourceBundleId;
    unsigned long long  _topicId;
    unsigned long long  _unixTimestampSec;
}

@property (nonatomic, retain) NSString *algorithm;
@property (nonatomic, readonly) bool hasAlgorithm;
@property (nonatomic, readonly) bool hasNamedEntity;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasSourceBundleId;
@property (nonatomic) bool hasTopicId;
@property (nonatomic) bool hasUnixTimestampSec;
@property (nonatomic, retain) NSString *namedEntity;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *sourceBundleId;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned long long unixTimestampSec;

- (void).cxx_destruct;
- (id)algorithm;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithm;
- (bool)hasNamedEntity;
- (bool)hasScore;
- (bool)hasSourceBundleId;
- (bool)hasTopicId;
- (bool)hasUnixTimestampSec;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedEntity;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setAlgorithm:(id)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasTopicId:(bool)arg1;
- (void)setHasUnixTimestampSec:(bool)arg1;
- (void)setNamedEntity:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSourceBundleId:(id)arg1;
- (void)setTopicId:(unsigned long long)arg1;
- (void)setUnixTimestampSec:(unsigned long long)arg1;
- (id)sourceBundleId;
- (unsigned long long)topicId;
- (unsigned long long)unixTimestampSec;
- (void)writeTo:(id)arg1;

@end
