
@interface SISchemaUEIRequestCategorization : SISchemaInstrumentationMessage {
    struct { 
        unsigned int requestType : 1; 
        unsigned int requestStatus : 1; 
    }  _has;
    int  _requestStatus;
    int  _requestType;
}

@property (nonatomic) bool hasRequestStatus;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int requestStatus;
@property (nonatomic) int requestType;

- (void)deleteRequestStatus;
- (void)deleteRequestType;
- (id)dictionaryRepresentation;
- (bool)hasRequestStatus;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)requestStatus;
- (int)requestType;
- (void)setHasRequestStatus:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestStatus:(int)arg1;
- (void)setRequestType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
