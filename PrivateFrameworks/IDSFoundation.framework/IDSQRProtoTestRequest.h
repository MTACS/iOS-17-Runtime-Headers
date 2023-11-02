
@interface IDSQRProtoTestRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int requestedErrorCode : 1; 
        unsigned int requestedMessageType : 1; 
    }  _has;
    unsigned int  _requestedErrorCode;
    unsigned int  _requestedMessageType;
    NSString * _subOperation;
    unsigned int  _testOptionFlags;
}

@property (nonatomic) bool hasRequestedErrorCode;
@property (nonatomic) bool hasRequestedMessageType;
@property (nonatomic, readonly) bool hasSubOperation;
@property (nonatomic) unsigned int requestedErrorCode;
@property (nonatomic) unsigned int requestedMessageType;
@property (nonatomic, retain) NSString *subOperation;
@property (nonatomic) unsigned int testOptionFlags;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestedErrorCode;
- (bool)hasRequestedMessageType;
- (bool)hasSubOperation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestedErrorCode;
- (unsigned int)requestedMessageType;
- (void)setHasRequestedErrorCode:(bool)arg1;
- (void)setHasRequestedMessageType:(bool)arg1;
- (void)setRequestedErrorCode:(unsigned int)arg1;
- (void)setRequestedMessageType:(unsigned int)arg1;
- (void)setSubOperation:(id)arg1;
- (void)setTestOptionFlags:(unsigned int)arg1;
- (id)subOperation;
- (unsigned int)testOptionFlags;
- (void)writeTo:(id)arg1;

@end
