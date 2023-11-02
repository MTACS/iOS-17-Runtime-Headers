
@interface INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isExactMatchPriorSiriContactGivenName : 1; 
        unsigned int isExactMatchPriorSiriContactFamilyName : 1; 
        unsigned int isExactMatchPriorSiriContactDisplayName : 1; 
        unsigned int isExactMatchPriorSiriContactId : 1; 
        unsigned int isExactMatchPriorSiriContactHandleValue : 1; 
        unsigned int interactionDurationInSecBucket : 1; 
        unsigned int potentialRetryIntervalInSecBucket : 1; 
    }  _has;
    unsigned int  _interactionDurationInSecBucket;
    bool  _isExactMatchPriorSiriContactDisplayName;
    bool  _isExactMatchPriorSiriContactFamilyName;
    bool  _isExactMatchPriorSiriContactGivenName;
    bool  _isExactMatchPriorSiriContactHandleValue;
    bool  _isExactMatchPriorSiriContactId;
    unsigned int  _potentialRetryIntervalInSecBucket;
}

@property (nonatomic) bool hasInteractionDurationInSecBucket;
@property (nonatomic) bool hasIsExactMatchPriorSiriContactDisplayName;
@property (nonatomic) bool hasIsExactMatchPriorSiriContactFamilyName;
@property (nonatomic) bool hasIsExactMatchPriorSiriContactGivenName;
@property (nonatomic) bool hasIsExactMatchPriorSiriContactHandleValue;
@property (nonatomic) bool hasIsExactMatchPriorSiriContactId;
@property (nonatomic) bool hasPotentialRetryIntervalInSecBucket;
@property (nonatomic) unsigned int interactionDurationInSecBucket;
@property (nonatomic) bool isExactMatchPriorSiriContactDisplayName;
@property (nonatomic) bool isExactMatchPriorSiriContactFamilyName;
@property (nonatomic) bool isExactMatchPriorSiriContactGivenName;
@property (nonatomic) bool isExactMatchPriorSiriContactHandleValue;
@property (nonatomic) bool isExactMatchPriorSiriContactId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int potentialRetryIntervalInSecBucket;

- (void)deleteInteractionDurationInSecBucket;
- (void)deleteIsExactMatchPriorSiriContactDisplayName;
- (void)deleteIsExactMatchPriorSiriContactFamilyName;
- (void)deleteIsExactMatchPriorSiriContactGivenName;
- (void)deleteIsExactMatchPriorSiriContactHandleValue;
- (void)deleteIsExactMatchPriorSiriContactId;
- (void)deletePotentialRetryIntervalInSecBucket;
- (id)dictionaryRepresentation;
- (bool)hasInteractionDurationInSecBucket;
- (bool)hasIsExactMatchPriorSiriContactDisplayName;
- (bool)hasIsExactMatchPriorSiriContactFamilyName;
- (bool)hasIsExactMatchPriorSiriContactGivenName;
- (bool)hasIsExactMatchPriorSiriContactHandleValue;
- (bool)hasIsExactMatchPriorSiriContactId;
- (bool)hasPotentialRetryIntervalInSecBucket;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned int)interactionDurationInSecBucket;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatchPriorSiriContactDisplayName;
- (bool)isExactMatchPriorSiriContactFamilyName;
- (bool)isExactMatchPriorSiriContactGivenName;
- (bool)isExactMatchPriorSiriContactHandleValue;
- (bool)isExactMatchPriorSiriContactId;
- (id)jsonData;
- (unsigned int)potentialRetryIntervalInSecBucket;
- (bool)readFrom:(id)arg1;
- (void)setHasInteractionDurationInSecBucket:(bool)arg1;
- (void)setHasIsExactMatchPriorSiriContactDisplayName:(bool)arg1;
- (void)setHasIsExactMatchPriorSiriContactFamilyName:(bool)arg1;
- (void)setHasIsExactMatchPriorSiriContactGivenName:(bool)arg1;
- (void)setHasIsExactMatchPriorSiriContactHandleValue:(bool)arg1;
- (void)setHasIsExactMatchPriorSiriContactId:(bool)arg1;
- (void)setHasPotentialRetryIntervalInSecBucket:(bool)arg1;
- (void)setInteractionDurationInSecBucket:(unsigned int)arg1;
- (void)setIsExactMatchPriorSiriContactDisplayName:(bool)arg1;
- (void)setIsExactMatchPriorSiriContactFamilyName:(bool)arg1;
- (void)setIsExactMatchPriorSiriContactGivenName:(bool)arg1;
- (void)setIsExactMatchPriorSiriContactHandleValue:(bool)arg1;
- (void)setIsExactMatchPriorSiriContactId:(bool)arg1;
- (void)setPotentialRetryIntervalInSecBucket:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
