
@interface INFERENCESchemaINFERENCEABModelEvaluated : SISchemaInstrumentationMessage {
    struct { 
        unsigned int projectIntent : 1; 
        unsigned int numCandidateApps : 1; 
        unsigned int isDecisionCorrect : 1; 
        unsigned int modelVersion : 1; 
        unsigned int isModelDisambiguation : 1; 
        unsigned int isModelConfirmation : 1; 
        unsigned int userPersona : 1; 
    }  _has;
    bool  _isDecisionCorrect;
    bool  _isModelConfirmation;
    bool  _isModelDisambiguation;
    unsigned int  _modelVersion;
    int  _numCandidateApps;
    int  _projectIntent;
    int  _userPersona;
}

@property (nonatomic) bool hasIsDecisionCorrect;
@property (nonatomic) bool hasIsModelConfirmation;
@property (nonatomic) bool hasIsModelDisambiguation;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasNumCandidateApps;
@property (nonatomic) bool hasProjectIntent;
@property (nonatomic) bool hasUserPersona;
@property (nonatomic) bool isDecisionCorrect;
@property (nonatomic) bool isModelConfirmation;
@property (nonatomic) bool isModelDisambiguation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) int numCandidateApps;
@property (nonatomic) int projectIntent;
@property (nonatomic) int userPersona;

- (void)deleteIsDecisionCorrect;
- (void)deleteIsModelConfirmation;
- (void)deleteIsModelDisambiguation;
- (void)deleteModelVersion;
- (void)deleteNumCandidateApps;
- (void)deleteProjectIntent;
- (void)deleteUserPersona;
- (id)dictionaryRepresentation;
- (bool)hasIsDecisionCorrect;
- (bool)hasIsModelConfirmation;
- (bool)hasIsModelDisambiguation;
- (bool)hasModelVersion;
- (bool)hasNumCandidateApps;
- (bool)hasProjectIntent;
- (bool)hasUserPersona;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDecisionCorrect;
- (bool)isEqual:(id)arg1;
- (bool)isModelConfirmation;
- (bool)isModelDisambiguation;
- (id)jsonData;
- (unsigned int)modelVersion;
- (int)numCandidateApps;
- (int)projectIntent;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDecisionCorrect:(bool)arg1;
- (void)setHasIsModelConfirmation:(bool)arg1;
- (void)setHasIsModelDisambiguation:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasNumCandidateApps:(bool)arg1;
- (void)setHasProjectIntent:(bool)arg1;
- (void)setHasUserPersona:(bool)arg1;
- (void)setIsDecisionCorrect:(bool)arg1;
- (void)setIsModelConfirmation:(bool)arg1;
- (void)setIsModelDisambiguation:(bool)arg1;
- (void)setModelVersion:(unsigned int)arg1;
- (void)setNumCandidateApps:(int)arg1;
- (void)setProjectIntent:(int)arg1;
- (void)setUserPersona:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userPersona;
- (void)writeTo:(id)arg1;

@end
