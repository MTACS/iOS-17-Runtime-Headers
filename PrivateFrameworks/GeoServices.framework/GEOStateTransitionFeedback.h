
@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_newValue : 1; 
        unsigned int has_oldValue : 1; 
        unsigned int has_stateType : 1; 
    }  _flags;
    int  _newValue;
    int  _oldValue;
    int  _stateType;
}

@property (nonatomic) bool hasNewValue;
@property (nonatomic) bool hasOldValue;
@property (nonatomic) bool hasStateType;
@property (nonatomic) int newValue;
@property (nonatomic) int oldValue;
@property (nonatomic) int stateType;

+ (bool)isValid:(id)arg1;

- (int)StringAsNewValue:(id)arg1;
- (int)StringAsOldValue:(id)arg1;
- (int)StringAsStateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNewValue;
- (bool)hasOldValue;
- (bool)hasStateType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)newValue;
- (id)newValueAsString:(int)arg1;
- (int)oldValue;
- (id)oldValueAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNewValue:(bool)arg1;
- (void)setHasOldValue:(bool)arg1;
- (void)setHasStateType:(bool)arg1;
- (void)setNewValue:(int)arg1;
- (void)setOldValue:(int)arg1;
- (void)setStateType:(int)arg1;
- (int)stateType;
- (id)stateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
