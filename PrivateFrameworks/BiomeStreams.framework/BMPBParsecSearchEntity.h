
@interface BMPBParsecSearchEntity : PBCodable <NSCopying> {
    unsigned int  _category;
    struct { 
        unsigned int category : 1; 
        unsigned int probabilityScore : 1; 
    }  _has;
    NSString * _name;
    float  _probabilityScore;
    NSMutableArray * _topics;
}

@property (nonatomic) unsigned int category;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasProbabilityScore;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) float probabilityScore;
@property (nonatomic, retain) NSMutableArray *topics;

+ (Class)topicsType;

- (void).cxx_destruct;
- (void)addTopics:(id)arg1;
- (unsigned int)category;
- (void)clearTopics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasName;
- (bool)hasProbabilityScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (float)probabilityScore;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(unsigned int)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasProbabilityScore:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setProbabilityScore:(float)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)writeTo:(id)arg1;

@end
