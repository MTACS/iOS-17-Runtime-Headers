
@interface GEOLogMsgStateAccount : PBCodable <NSCopying> {
    struct { 
        unsigned int has_signedIntoIcloud : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _possibleActions;
    bool  _signedIntoIcloud;
}

@property (nonatomic) bool hasSignedIntoIcloud;
@property (nonatomic, readonly) int*possibleActions;
@property (nonatomic, readonly) unsigned long long possibleActionsCount;
@property (nonatomic) bool signedIntoIcloud;

+ (bool)isValid:(id)arg1;

- (int)StringAsPossibleActions:(id)arg1;
- (void)addPossibleAction:(int)arg1;
- (void)clearPossibleActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignedIntoIcloud;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)possibleActionAtIndex:(unsigned long long)arg1;
- (int*)possibleActions;
- (id)possibleActionsAsString:(int)arg1;
- (unsigned long long)possibleActionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSignedIntoIcloud:(bool)arg1;
- (void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSignedIntoIcloud:(bool)arg1;
- (bool)signedIntoIcloud;
- (void)writeTo:(id)arg1;

@end
