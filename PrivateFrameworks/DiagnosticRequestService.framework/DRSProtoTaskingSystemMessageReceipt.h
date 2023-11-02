
@interface DRSProtoTaskingSystemMessageReceipt : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    NSString * _channelEnvironment;
    NSString * _channelType;
    struct { 
        unsigned int receiptDelay : 1; 
    }  _has;
    NSString * _messageType;
    float  _receiptDelay;
    DRSProtoTaskingDeviceMetadata * _taskingDeviceMetadata;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *channelEnvironment;
@property (nonatomic, retain) NSString *channelType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasChannelEnvironment;
@property (nonatomic, readonly) bool hasChannelType;
@property (nonatomic, readonly) bool hasMessageType;
@property (nonatomic) bool hasReceiptDelay;
@property (nonatomic, readonly) bool hasTaskingDeviceMetadata;
@property (nonatomic, readonly) bool hasUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *messageType;
@property (nonatomic) float receiptDelay;
@property (readonly) Class superclass;
@property (nonatomic, retain) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (id)channelEnvironment;
- (id)channelType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelEnvironment;
- (bool)hasChannelType;
- (bool)hasMessageType;
- (bool)hasReceiptDelay;
- (bool)hasTaskingDeviceMetadata;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageType;
- (bool)readFrom:(id)arg1;
- (float)receiptDelay;
- (void)setChannelEnvironment:(id)arg1;
- (void)setChannelType:(id)arg1;
- (void)setHasReceiptDelay:(bool)arg1;
- (void)setMessageType:(id)arg1;
- (void)setReceiptDelay:(float)arg1;
- (void)setTaskingDeviceMetadata:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)taskingDeviceMetadata;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
