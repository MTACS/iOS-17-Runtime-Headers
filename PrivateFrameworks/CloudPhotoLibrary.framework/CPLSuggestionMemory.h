
@interface CPLSuggestionMemory : PBCodable <NSCopying> {
    NSString * _context;
    unsigned int  _feature;
    struct { 
        unsigned int feature : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _memoryIdentifier;
    unsigned int  _type;
}

@property (nonatomic, retain) NSString *context;
@property (nonatomic) unsigned int feature;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasFeature;
@property (nonatomic, readonly) bool hasMemoryIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *memoryIdentifier;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)feature;
- (bool)hasContext;
- (bool)hasFeature;
- (bool)hasMemoryIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)memoryIdentifier;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFeature:(unsigned int)arg1;
- (void)setHasFeature:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMemoryIdentifier:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
