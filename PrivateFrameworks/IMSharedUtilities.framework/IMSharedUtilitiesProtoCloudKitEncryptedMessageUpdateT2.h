
@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT2 : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSString * _msgid;
    NSData * _padding;
    NSString * _sr;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasMsgid;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic, readonly) bool hasSr;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *msgid;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic, retain) NSString *sr;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMsgid;
- (bool)hasPadding;
- (bool)hasSr;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)msgid;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMsgid:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setSr:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)sr;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
