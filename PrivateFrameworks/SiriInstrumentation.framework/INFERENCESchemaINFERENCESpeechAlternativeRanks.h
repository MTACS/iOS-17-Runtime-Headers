
@interface INFERENCESchemaINFERENCESpeechAlternativeRanks : SISchemaInstrumentationMessage {
    unsigned int  _familyNameRank;
    unsigned int  _fullNameRank;
    unsigned int  _givenNameRank;
    struct { 
        unsigned int isError : 1; 
        unsigned int version : 1; 
        unsigned int givenNameRank : 1; 
        unsigned int middleNameRank : 1; 
        unsigned int familyNameRank : 1; 
        unsigned int fullNameRank : 1; 
    }  _has;
    bool  _isError;
    unsigned int  _middleNameRank;
    unsigned int  _version;
}

@property (nonatomic) unsigned int familyNameRank;
@property (nonatomic) unsigned int fullNameRank;
@property (nonatomic) unsigned int givenNameRank;
@property (nonatomic) bool hasFamilyNameRank;
@property (nonatomic) bool hasFullNameRank;
@property (nonatomic) bool hasGivenNameRank;
@property (nonatomic) bool hasIsError;
@property (nonatomic) bool hasMiddleNameRank;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool isError;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int middleNameRank;
@property (nonatomic) unsigned int version;

- (void)deleteFamilyNameRank;
- (void)deleteFullNameRank;
- (void)deleteGivenNameRank;
- (void)deleteIsError;
- (void)deleteMiddleNameRank;
- (void)deleteVersion;
- (id)dictionaryRepresentation;
- (unsigned int)familyNameRank;
- (unsigned int)fullNameRank;
- (unsigned int)givenNameRank;
- (bool)hasFamilyNameRank;
- (bool)hasFullNameRank;
- (bool)hasGivenNameRank;
- (bool)hasIsError;
- (bool)hasMiddleNameRank;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isError;
- (id)jsonData;
- (unsigned int)middleNameRank;
- (bool)readFrom:(id)arg1;
- (void)setFamilyNameRank:(unsigned int)arg1;
- (void)setFullNameRank:(unsigned int)arg1;
- (void)setGivenNameRank:(unsigned int)arg1;
- (void)setHasFamilyNameRank:(bool)arg1;
- (void)setHasFullNameRank:(bool)arg1;
- (void)setHasGivenNameRank:(bool)arg1;
- (void)setHasIsError:(bool)arg1;
- (void)setHasMiddleNameRank:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIsError:(bool)arg1;
- (void)setMiddleNameRank:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
