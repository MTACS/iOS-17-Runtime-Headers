
@interface HDCodableSectionData : PBCodable <NSCopying> {
    bool  _deleted;
    struct { 
        unsigned int sectionDataType : 1; 
        unsigned int timestamp : 1; 
        unsigned int version : 1; 
        unsigned int deleted : 1; 
    }  _has;
    long long  _sectionDataType;
    NSMutableArray * _stringValues;
    double  _timestamp;
    long long  _version;
}

@property (nonatomic) bool deleted;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasSectionDataType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVersion;
@property (nonatomic) long long sectionDataType;
@property (nonatomic, retain) NSMutableArray *stringValues;
@property (nonatomic) double timestamp;
@property (nonatomic) long long version;

+ (Class)stringValuesType;

- (void).cxx_destruct;
- (void)addStringValues:(id)arg1;
- (void)clearStringValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeleted;
- (bool)hasSectionDataType;
- (bool)hasTimestamp;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)sectionDataType;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasSectionDataType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setSectionDataType:(long long)arg1;
- (void)setStringValues:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVersion:(long long)arg1;
- (id)stringValues;
- (id)stringValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)stringValuesCount;
- (double)timestamp;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
