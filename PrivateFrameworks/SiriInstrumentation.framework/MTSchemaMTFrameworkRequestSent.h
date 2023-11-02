
@interface MTSchemaMTFrameworkRequestSent : SISchemaInstrumentationMessage {
    SISchemaUUID * _frameworkRequestId;
    struct { 
        unsigned int requestType : 1; 
        unsigned int requestRoute : 1; 
        unsigned int requestSize : 1; 
    }  _has;
    bool  _hasFrameworkRequestId;
    bool  _hasQssSessionId;
    NSString * _qssSessionId;
    int  _requestRoute;
    unsigned int  _requestSize;
    int  _requestType;
}

@property (nonatomic, retain) SISchemaUUID *frameworkRequestId;
@property (nonatomic) bool hasFrameworkRequestId;
@property (nonatomic) bool hasQssSessionId;
@property (nonatomic) bool hasRequestRoute;
@property (nonatomic) bool hasRequestSize;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *qssSessionId;
@property (nonatomic) int requestRoute;
@property (nonatomic) unsigned int requestSize;
@property (nonatomic) int requestType;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFrameworkRequestId;
- (void)deleteQssSessionId;
- (void)deleteRequestRoute;
- (void)deleteRequestSize;
- (void)deleteRequestType;
- (id)dictionaryRepresentation;
- (id)frameworkRequestId;
- (bool)hasFrameworkRequestId;
- (bool)hasQssSessionId;
- (bool)hasRequestRoute;
- (bool)hasRequestSize;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qssSessionId;
- (bool)readFrom:(id)arg1;
- (int)requestRoute;
- (unsigned int)requestSize;
- (int)requestType;
- (void)setFrameworkRequestId:(id)arg1;
- (void)setHasFrameworkRequestId:(bool)arg1;
- (void)setHasQssSessionId:(bool)arg1;
- (void)setHasRequestRoute:(bool)arg1;
- (void)setHasRequestSize:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setQssSessionId:(id)arg1;
- (void)setRequestRoute:(int)arg1;
- (void)setRequestSize:(unsigned int)arg1;
- (void)setRequestType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithFrameworkRequestId:(id)arg1 qssSessionId:(id)arg2 requestType:(long long)arg3 requestRoute:(long long)arg4 requestSize:(unsigned long long)arg5;

@end
