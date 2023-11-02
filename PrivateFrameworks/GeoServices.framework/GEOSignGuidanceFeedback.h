
@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_signDetailIndex : 1; 
        unsigned int has_signTitleIndex : 1; 
    }  _flags;
    int  _signDetailIndex;
    int  _signTitleIndex;
}

@property (nonatomic) bool hasSignDetailIndex;
@property (nonatomic) bool hasSignTitleIndex;
@property (nonatomic) int signDetailIndex;
@property (nonatomic) int signTitleIndex;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignDetailIndex;
- (bool)hasSignTitleIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSignDetailIndex:(bool)arg1;
- (void)setHasSignTitleIndex:(bool)arg1;
- (void)setSignDetailIndex:(int)arg1;
- (void)setSignTitleIndex:(int)arg1;
- (int)signDetailIndex;
- (int)signTitleIndex;
- (void)writeTo:(id)arg1;

@end
