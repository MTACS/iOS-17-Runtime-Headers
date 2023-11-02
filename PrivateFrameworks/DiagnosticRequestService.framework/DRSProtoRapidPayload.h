
@interface DRSProtoRapidPayload : PBCodable <NSCopying> {
    DRSProtoClientDeviceMetadata * _deviceMetadata;
    struct { 
        unsigned int uploadAttempts : 1; 
    }  _has;
    NSData * _payload;
    DRSProtoFileDescription * _payloadDescription;
    DRSProtoRequestDescription * _payloadMetadata;
    unsigned int  _uploadAttempts;
}

@property (nonatomic, retain) DRSProtoClientDeviceMetadata *deviceMetadata;
@property (nonatomic, readonly) bool hasDeviceMetadata;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasPayloadDescription;
@property (nonatomic, readonly) bool hasPayloadMetadata;
@property (nonatomic) bool hasUploadAttempts;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) DRSProtoFileDescription *payloadDescription;
@property (nonatomic, retain) DRSProtoRequestDescription *payloadMetadata;
@property (nonatomic) unsigned int uploadAttempts;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceMetadata;
- (id)dictionaryRepresentation;
- (bool)hasDeviceMetadata;
- (bool)hasPayload;
- (bool)hasPayloadDescription;
- (bool)hasPayloadMetadata;
- (bool)hasUploadAttempts;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (id)payloadDescription;
- (id)payloadMetadata;
- (bool)readFrom:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setHasUploadAttempts:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadMetadata:(id)arg1;
- (void)setUploadAttempts:(unsigned int)arg1;
- (unsigned int)uploadAttempts;
- (void)writeTo:(id)arg1;

@end
