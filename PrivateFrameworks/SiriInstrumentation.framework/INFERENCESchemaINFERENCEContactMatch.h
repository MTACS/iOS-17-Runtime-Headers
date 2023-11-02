
@interface INFERENCESchemaINFERENCEContactMatch : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCEBackgroundContactSignalSet * _backgroundSignalSet;
    INFERENCESchemaINFERENCEContactSignalSet * _contactSignalSet;
    INFERENCESchemaINFERENCEContact * _contactValue;
    INFERENCESchemaINFERENCEContactFeatureSet * _featureSet;
    struct { 
        unsigned int score : 1; 
        unsigned int isShownToUser : 1; 
    }  _has;
    bool  _hasBackgroundSignalSet;
    bool  _hasContactSignalSet;
    bool  _hasContactValue;
    bool  _hasFeatureSet;
    bool  _isShownToUser;
    float  _score;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCEBackgroundContactSignalSet *backgroundSignalSet;
@property (nonatomic, retain) INFERENCESchemaINFERENCEContactSignalSet *contactSignalSet;
@property (nonatomic, retain) INFERENCESchemaINFERENCEContact *contactValue;
@property (nonatomic, retain) INFERENCESchemaINFERENCEContactFeatureSet *featureSet;
@property (nonatomic) bool hasBackgroundSignalSet;
@property (nonatomic) bool hasContactSignalSet;
@property (nonatomic) bool hasContactValue;
@property (nonatomic) bool hasFeatureSet;
@property (nonatomic) bool hasIsShownToUser;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool isShownToUser;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float score;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)backgroundSignalSet;
- (id)contactSignalSet;
- (id)contactValue;
- (void)deleteBackgroundSignalSet;
- (void)deleteContactSignalSet;
- (void)deleteContactValue;
- (void)deleteFeatureSet;
- (void)deleteIsShownToUser;
- (void)deleteScore;
- (id)dictionaryRepresentation;
- (id)featureSet;
- (bool)hasBackgroundSignalSet;
- (bool)hasContactSignalSet;
- (bool)hasContactValue;
- (bool)hasFeatureSet;
- (bool)hasIsShownToUser;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShownToUser;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setBackgroundSignalSet:(id)arg1;
- (void)setContactSignalSet:(id)arg1;
- (void)setContactValue:(id)arg1;
- (void)setFeatureSet:(id)arg1;
- (void)setHasBackgroundSignalSet:(bool)arg1;
- (void)setHasContactSignalSet:(bool)arg1;
- (void)setHasContactValue:(bool)arg1;
- (void)setHasFeatureSet:(bool)arg1;
- (void)setHasIsShownToUser:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setIsShownToUser:(bool)arg1;
- (void)setScore:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
