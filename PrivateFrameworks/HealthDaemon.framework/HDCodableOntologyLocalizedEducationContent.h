
@interface HDCodableOntologyLocalizedEducationContent : PBCodable <NSCopying> {
    bool  _deleted;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int version : 1; 
        unsigned int deleted : 1; 
    }  _has;
    NSMutableArray * _sections;
    double  _timestamp;
    long long  _version;
}

@property (nonatomic) bool deleted;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic) double timestamp;
@property (nonatomic) long long version;

+ (Class)sectionsType;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeleted;
- (bool)hasTimestamp;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setSections:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVersion:(long long)arg1;
- (double)timestamp;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
