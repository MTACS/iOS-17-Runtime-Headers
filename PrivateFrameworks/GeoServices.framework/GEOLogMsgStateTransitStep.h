
@interface GEOLogMsgStateTransitStep : PBCodable <NSCopying> {
    unsigned int  _currentStep;
    struct { 
        unsigned int has_currentStep : 1; 
    }  _flags;
}

@property (nonatomic) unsigned int currentStep;
@property (nonatomic) bool hasCurrentStep;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentStep;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentStep;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentStep:(unsigned int)arg1;
- (void)setHasCurrentStep:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
