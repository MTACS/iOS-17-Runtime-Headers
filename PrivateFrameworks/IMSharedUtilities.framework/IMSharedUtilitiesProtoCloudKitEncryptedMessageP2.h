
@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP2 : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSData * _padding;
    NSString * _threadIdentifier;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic, readonly) bool hasThreadIdentifier;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic, retain) NSString *threadIdentifier;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPadding;
- (bool)hasThreadIdentifier;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setPadding:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)threadIdentifier;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
