
@interface SISchemaUUFRPresented : SISchemaInstrumentationMessage {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasErrorDomain;
    bool  _hasViewContainer;
    SISchemaViewContainer * _viewContainer;
}

@property (nonatomic) int errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasViewContainer;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaViewContainer *viewContainer;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteViewContainer;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasViewContainer;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasViewContainer:(bool)arg1;
- (void)setViewContainer:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)viewContainer;
- (void)writeTo:(id)arg1;

@end
