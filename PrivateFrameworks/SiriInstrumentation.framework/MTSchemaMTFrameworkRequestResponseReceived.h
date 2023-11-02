
@interface MTSchemaMTFrameworkRequestResponseReceived : SISchemaInstrumentationMessage {
    SISchemaUUID * _frameworkRequestId;
    struct { 
        unsigned int requestRoute : 1; 
    }  _has;
    bool  _hasFrameworkRequestId;
    int  _requestRoute;
}

@property (nonatomic, retain) SISchemaUUID *frameworkRequestId;
@property (nonatomic) bool hasFrameworkRequestId;
@property (nonatomic) bool hasRequestRoute;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int requestRoute;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFrameworkRequestId;
- (void)deleteRequestRoute;
- (id)dictionaryRepresentation;
- (id)frameworkRequestId;
- (bool)hasFrameworkRequestId;
- (bool)hasRequestRoute;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)requestRoute;
- (void)setFrameworkRequestId:(id)arg1;
- (void)setHasFrameworkRequestId:(bool)arg1;
- (void)setHasRequestRoute:(bool)arg1;
- (void)setRequestRoute:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithFrameworkRequestId:(id)arg1 requestRoute:(long long)arg2;

@end
