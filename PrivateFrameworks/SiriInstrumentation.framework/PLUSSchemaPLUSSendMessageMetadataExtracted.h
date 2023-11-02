
@interface PLUSSchemaPLUSSendMessageMetadataExtracted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int initialSendMessageRequestNumberOfContacts : 1; 
        unsigned int initialSendMessageRequestHasPayload : 1; 
        unsigned int numberOfTimesMessageContactChanged : 1; 
        unsigned int numberOfTimesMessagePayloadChanged : 1; 
    }  _has;
    bool  _hasOriginalPlusId;
    bool  _initialSendMessageRequestHasPayload;
    unsigned int  _initialSendMessageRequestNumberOfContacts;
    unsigned int  _numberOfTimesMessageContactChanged;
    unsigned int  _numberOfTimesMessagePayloadChanged;
    SISchemaUUID * _originalPlusId;
}

@property (nonatomic) bool hasInitialSendMessageRequestHasPayload;
@property (nonatomic) bool hasInitialSendMessageRequestNumberOfContacts;
@property (nonatomic) bool hasNumberOfTimesMessageContactChanged;
@property (nonatomic) bool hasNumberOfTimesMessagePayloadChanged;
@property (nonatomic) bool hasOriginalPlusId;
@property (nonatomic) bool initialSendMessageRequestHasPayload;
@property (nonatomic) unsigned int initialSendMessageRequestNumberOfContacts;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numberOfTimesMessageContactChanged;
@property (nonatomic) unsigned int numberOfTimesMessagePayloadChanged;
@property (nonatomic, retain) SISchemaUUID *originalPlusId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteInitialSendMessageRequestHasPayload;
- (void)deleteInitialSendMessageRequestNumberOfContacts;
- (void)deleteNumberOfTimesMessageContactChanged;
- (void)deleteNumberOfTimesMessagePayloadChanged;
- (void)deleteOriginalPlusId;
- (id)dictionaryRepresentation;
- (bool)hasInitialSendMessageRequestHasPayload;
- (bool)hasInitialSendMessageRequestNumberOfContacts;
- (bool)hasNumberOfTimesMessageContactChanged;
- (bool)hasNumberOfTimesMessagePayloadChanged;
- (bool)hasOriginalPlusId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)initialSendMessageRequestHasPayload;
- (unsigned int)initialSendMessageRequestNumberOfContacts;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numberOfTimesMessageContactChanged;
- (unsigned int)numberOfTimesMessagePayloadChanged;
- (id)originalPlusId;
- (bool)readFrom:(id)arg1;
- (void)setHasInitialSendMessageRequestHasPayload:(bool)arg1;
- (void)setHasInitialSendMessageRequestNumberOfContacts:(bool)arg1;
- (void)setHasNumberOfTimesMessageContactChanged:(bool)arg1;
- (void)setHasNumberOfTimesMessagePayloadChanged:(bool)arg1;
- (void)setHasOriginalPlusId:(bool)arg1;
- (void)setInitialSendMessageRequestHasPayload:(bool)arg1;
- (void)setInitialSendMessageRequestNumberOfContacts:(unsigned int)arg1;
- (void)setNumberOfTimesMessageContactChanged:(unsigned int)arg1;
- (void)setNumberOfTimesMessagePayloadChanged:(unsigned int)arg1;
- (void)setOriginalPlusId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
