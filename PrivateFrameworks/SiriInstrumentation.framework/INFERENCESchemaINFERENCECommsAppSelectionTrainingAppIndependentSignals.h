
@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals : SISchemaInstrumentationMessage {
    int  _appResolutionType;
    long long  _communicationType;
    struct { 
        unsigned int requestOriginLocale : 1; 
        unsigned int requestOriginLanguage : 1; 
        unsigned int communicationType : 1; 
        unsigned int appResolutionType : 1; 
        unsigned int userPersona : 1; 
    }  _has;
    long long  _requestOriginLanguage;
    long long  _requestOriginLocale;
    int  _userPersona;
}

@property (nonatomic) int appResolutionType;
@property (nonatomic) long long communicationType;
@property (nonatomic) bool hasAppResolutionType;
@property (nonatomic) bool hasCommunicationType;
@property (nonatomic) bool hasRequestOriginLanguage;
@property (nonatomic) bool hasRequestOriginLocale;
@property (nonatomic) bool hasUserPersona;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long requestOriginLanguage;
@property (nonatomic) long long requestOriginLocale;
@property (nonatomic) int userPersona;

- (int)appResolutionType;
- (long long)communicationType;
- (void)deleteAppResolutionType;
- (void)deleteCommunicationType;
- (void)deleteRequestOriginLanguage;
- (void)deleteRequestOriginLocale;
- (void)deleteUserPersona;
- (id)dictionaryRepresentation;
- (bool)hasAppResolutionType;
- (bool)hasCommunicationType;
- (bool)hasRequestOriginLanguage;
- (bool)hasRequestOriginLocale;
- (bool)hasUserPersona;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (long long)requestOriginLanguage;
- (long long)requestOriginLocale;
- (void)setAppResolutionType:(int)arg1;
- (void)setCommunicationType:(long long)arg1;
- (void)setHasAppResolutionType:(bool)arg1;
- (void)setHasCommunicationType:(bool)arg1;
- (void)setHasRequestOriginLanguage:(bool)arg1;
- (void)setHasRequestOriginLocale:(bool)arg1;
- (void)setHasUserPersona:(bool)arg1;
- (void)setRequestOriginLanguage:(long long)arg1;
- (void)setRequestOriginLocale:(long long)arg1;
- (void)setUserPersona:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userPersona;
- (void)writeTo:(id)arg1;

@end
