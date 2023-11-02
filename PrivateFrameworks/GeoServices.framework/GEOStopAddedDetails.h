
@interface GEOStopAddedDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int has_stopAddedAction : 1; 
    }  _flags;
    int  _stopAddedAction;
}

@property (nonatomic) bool hasStopAddedAction;
@property (nonatomic) int stopAddedAction;

+ (bool)isValid:(id)arg1;

- (int)StringAsStopAddedAction:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStopAddedAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStopAddedAction:(bool)arg1;
- (void)setStopAddedAction:(int)arg1;
- (int)stopAddedAction;
- (id)stopAddedActionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
