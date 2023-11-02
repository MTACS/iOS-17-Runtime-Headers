
@interface SIServiceServerUploadInfo : SISchemaInstrumentationMessage {
    struct { 
        unsigned int ns_server_upload_ts : 1; 
    }  _has;
    long long  _ns_server_upload_ts;
}

@property (nonatomic) bool hasNs_server_upload_ts;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long ns_server_upload_ts;

- (void)deleteNs_server_upload_ts;
- (id)dictionaryRepresentation;
- (bool)hasNs_server_upload_ts;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (long long)ns_server_upload_ts;
- (bool)readFrom:(id)arg1;
- (void)setHasNs_server_upload_ts:(bool)arg1;
- (void)setNs_server_upload_ts:(long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
