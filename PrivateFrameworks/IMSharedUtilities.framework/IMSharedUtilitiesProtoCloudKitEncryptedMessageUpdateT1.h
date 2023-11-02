
@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT1 : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSString * _msgid;
    NSData * _padding;
    NSString * _threadGuid;
    NSString * _threadPart;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasMsgid;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic, readonly) bool hasThreadGuid;
@property (nonatomic, readonly) bool hasThreadPart;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *msgid;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic, retain) NSString *threadGuid;
@property (nonatomic, retain) NSString *threadPart;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMsgid;
- (bool)hasPadding;
- (bool)hasThreadGuid;
- (bool)hasThreadPart;
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
- (void)setThreadGuid:(id)arg1;
- (void)setThreadPart:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)threadGuid;
- (id)threadPart;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
