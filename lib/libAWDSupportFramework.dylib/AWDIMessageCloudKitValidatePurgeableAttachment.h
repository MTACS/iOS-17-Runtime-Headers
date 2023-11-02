
@interface AWDIMessageCloudKitValidatePurgeableAttachment : PBCodable <NSCopying> {
    unsigned int  _attachmentSize;
    unsigned int  _connectionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attachmentSize : 1; 
        unsigned int connectionType : 1; 
        unsigned int linkQuality : 1; 
        unsigned int operationalErrorCode : 1; 
        unsigned int validatedAttachment : 1; 
        unsigned int validationErrorCode : 1; 
    }  _has;
    int  _linkQuality;
    unsigned int  _operationalErrorCode;
    NSString * _operationalErrorDomain;
    unsigned long long  _timestamp;
    unsigned int  _validatedAttachment;
    unsigned int  _validationErrorCode;
    NSString * _validationErrorDomain;
}

@property (nonatomic) unsigned int attachmentSize;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) bool hasAttachmentSize;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasOperationalErrorCode;
@property (nonatomic, readonly) bool hasOperationalErrorDomain;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasValidatedAttachment;
@property (nonatomic) bool hasValidationErrorCode;
@property (nonatomic, readonly) bool hasValidationErrorDomain;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int operationalErrorCode;
@property (nonatomic, retain) NSString *operationalErrorDomain;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int validatedAttachment;
@property (nonatomic) unsigned int validationErrorCode;
@property (nonatomic, retain) NSString *validationErrorDomain;

- (unsigned int)attachmentSize;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttachmentSize;
- (bool)hasConnectionType;
- (bool)hasLinkQuality;
- (bool)hasOperationalErrorCode;
- (bool)hasOperationalErrorDomain;
- (bool)hasTimestamp;
- (bool)hasValidatedAttachment;
- (bool)hasValidationErrorCode;
- (bool)hasValidationErrorDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)operationalErrorCode;
- (id)operationalErrorDomain;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentSize:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setHasAttachmentSize:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasOperationalErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasValidatedAttachment:(bool)arg1;
- (void)setHasValidationErrorCode:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setOperationalErrorCode:(unsigned int)arg1;
- (void)setOperationalErrorDomain:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setValidatedAttachment:(unsigned int)arg1;
- (void)setValidationErrorCode:(unsigned int)arg1;
- (void)setValidationErrorDomain:(id)arg1;
- (unsigned long long)timestamp;
- (unsigned int)validatedAttachment;
- (unsigned int)validationErrorCode;
- (id)validationErrorDomain;
- (void)writeTo:(id)arg1;

@end
