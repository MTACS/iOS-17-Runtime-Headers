
@interface FLOWLINKSchemaFLOWLINKAction : SISchemaInstrumentationMessage {
    NSString * _actionIdentifierName;
    struct { 
        unsigned int systemProtocol : 1; 
        unsigned int presentationStyle : 1; 
    }  _has;
    bool  _hasActionIdentifierName;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _parameters;
    int  _presentationStyle;
    int  _systemProtocol;
}

@property (nonatomic, copy) NSString *actionIdentifierName;
@property (nonatomic) bool hasActionIdentifierName;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasPresentationStyle;
@property (nonatomic) bool hasSystemProtocol;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *parameters;
@property (nonatomic) int presentationStyle;
@property (nonatomic) int systemProtocol;

- (void).cxx_destruct;
- (id)actionIdentifierName;
- (void)addParameters:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearParameters;
- (void)deleteActionIdentifierName;
- (void)deleteLinkId;
- (void)deleteParameters;
- (void)deletePresentationStyle;
- (void)deleteSystemProtocol;
- (id)dictionaryRepresentation;
- (bool)hasActionIdentifierName;
- (bool)hasLinkId;
- (bool)hasPresentationStyle;
- (bool)hasSystemProtocol;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)parameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (int)presentationStyle;
- (bool)readFrom:(id)arg1;
- (void)setActionIdentifierName:(id)arg1;
- (void)setHasActionIdentifierName:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasPresentationStyle:(bool)arg1;
- (void)setHasSystemProtocol:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPresentationStyle:(int)arg1;
- (void)setSystemProtocol:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)systemProtocol;
- (void)writeTo:(id)arg1;

@end
