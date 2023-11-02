
@interface NETSchemaNETSessionConnectionHttpHeaderCreated : SISchemaInstrumentationMessage {
    NSString * _aceHost;
    bool  _hasAceHost;
    bool  _hasUserAgent;
    NSString * _userAgent;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic) bool hasAceHost;
@property (nonatomic) bool hasUserAgent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *userAgent;

- (void).cxx_destruct;
- (id)aceHost;
- (void)deleteAceHost;
- (void)deleteUserAgent;
- (id)dictionaryRepresentation;
- (bool)hasAceHost;
- (bool)hasUserAgent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceHost:(id)arg1;
- (void)setHasAceHost:(bool)arg1;
- (void)setHasUserAgent:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userAgent;
- (void)writeTo:(id)arg1;

@end
