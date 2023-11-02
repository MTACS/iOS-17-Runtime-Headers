
@interface NLPOIEntryImpl : PBCodable <NSCopying> {
    NSString * _category;
    NSString * _domain;
    struct { 
        unsigned int score : 1; 
    }  _has;
    NSString * _name;
    float  _score;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasScore;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) float score;

- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCategory;
- (bool)hasDomain;
- (bool)hasName;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setCategory:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setScore:(float)arg1;
- (void)writeTo:(id)arg1;

@end
