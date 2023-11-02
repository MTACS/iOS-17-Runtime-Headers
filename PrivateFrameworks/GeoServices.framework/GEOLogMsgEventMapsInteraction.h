
@interface GEOLogMsgEventMapsInteraction : PBCodable <NSCopying> {
    struct { 
        unsigned int has_interactionType : 1; 
    }  _flags;
    int  _interactionType;
}

@property (nonatomic) bool hasInteractionType;
@property (nonatomic) int interactionType;

+ (bool)isValid:(id)arg1;

- (int)StringAsInteractionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInteractionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)interactionType;
- (id)interactionTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasInteractionType:(bool)arg1;
- (void)setInteractionType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
