
@interface SIServiceBatchInfo : SISchemaInstrumentationMessage {
    NSData * _batch_id;
    int  _batch_type;
    SIServiceDeviceUploadInfo * _device_upload_info;
    struct { 
        unsigned int batch_type : 1; 
    }  _has;
    bool  _hasBatch_id;
    bool  _hasDevice_upload_info;
    bool  _hasServer_upload_info;
    SIServiceServerUploadInfo * _server_upload_info;
    unsigned long long  _whichUpload_Info;
}

@property (nonatomic, copy) NSData *batch_id;
@property (nonatomic) int batch_type;
@property (nonatomic, retain) SIServiceDeviceUploadInfo *device_upload_info;
@property (nonatomic) bool hasBatch_id;
@property (nonatomic) bool hasBatch_type;
@property (nonatomic) bool hasDevice_upload_info;
@property (nonatomic) bool hasServer_upload_info;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SIServiceServerUploadInfo *server_upload_info;
@property (nonatomic, readonly) unsigned long long whichUpload_Info;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)batch_id;
- (int)batch_type;
- (void)deleteBatch_id;
- (void)deleteBatch_type;
- (void)deleteDevice_upload_info;
- (void)deleteServer_upload_info;
- (id)device_upload_info;
- (id)dictionaryRepresentation;
- (bool)hasBatch_id;
- (bool)hasBatch_type;
- (bool)hasDevice_upload_info;
- (bool)hasServer_upload_info;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)server_upload_info;
- (void)setBatch_id:(id)arg1;
- (void)setBatch_type:(int)arg1;
- (void)setDevice_upload_info:(id)arg1;
- (void)setHasBatch_id:(bool)arg1;
- (void)setHasBatch_type:(bool)arg1;
- (void)setHasDevice_upload_info:(bool)arg1;
- (void)setHasServer_upload_info:(bool)arg1;
- (void)setServer_upload_info:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichUpload_Info;
- (void)writeTo:(id)arg1;

@end
