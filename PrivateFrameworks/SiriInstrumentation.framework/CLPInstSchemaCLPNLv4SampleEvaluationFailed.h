
@interface CLPInstSchemaCLPNLv4SampleEvaluationFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int userProfileSandboxFailure : 1; 
        unsigned int xpcClientDisconnected : 1; 
        unsigned int xpcClientNLURequestTimeout : 1; 
    }  _has;
    bool  _userProfileSandboxFailure;
    bool  _xpcClientDisconnected;
    bool  _xpcClientNLURequestTimeout;
}

@property (nonatomic) bool hasUserProfileSandboxFailure;
@property (nonatomic) bool hasXpcClientDisconnected;
@property (nonatomic) bool hasXpcClientNLURequestTimeout;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool userProfileSandboxFailure;
@property (nonatomic) bool xpcClientDisconnected;
@property (nonatomic) bool xpcClientNLURequestTimeout;

- (void)deleteUserProfileSandboxFailure;
- (void)deleteXpcClientDisconnected;
- (void)deleteXpcClientNLURequestTimeout;
- (id)dictionaryRepresentation;
- (bool)hasUserProfileSandboxFailure;
- (bool)hasXpcClientDisconnected;
- (bool)hasXpcClientNLURequestTimeout;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUserProfileSandboxFailure:(bool)arg1;
- (void)setHasXpcClientDisconnected:(bool)arg1;
- (void)setHasXpcClientNLURequestTimeout:(bool)arg1;
- (void)setUserProfileSandboxFailure:(bool)arg1;
- (void)setXpcClientDisconnected:(bool)arg1;
- (void)setXpcClientNLURequestTimeout:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)userProfileSandboxFailure;
- (void)writeTo:(id)arg1;
- (bool)xpcClientDisconnected;
- (bool)xpcClientNLURequestTimeout;

@end
