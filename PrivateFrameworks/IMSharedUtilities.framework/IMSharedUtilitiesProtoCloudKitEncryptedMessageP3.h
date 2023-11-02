
@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP3 : PBCodable <NSCopying> {
    unsigned int  _cmmAssetOffset;
    unsigned int  _cmmState;
    struct { 
        unsigned int cmmAssetOffset : 1; 
        unsigned int cmmState : 1; 
        unsigned int version : 1; 
    }  _has;
    NSData * _padding;
    unsigned int  _version;
}

@property (nonatomic) unsigned int cmmAssetOffset;
@property (nonatomic) unsigned int cmmState;
@property (nonatomic) bool hasCmmAssetOffset;
@property (nonatomic) bool hasCmmState;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic) unsigned int version;

- (unsigned int)cmmAssetOffset;
- (unsigned int)cmmState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCmmAssetOffset;
- (bool)hasCmmState;
- (bool)hasPadding;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setCmmAssetOffset:(unsigned int)arg1;
- (void)setCmmState:(unsigned int)arg1;
- (void)setHasCmmAssetOffset:(bool)arg1;
- (void)setHasCmmState:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setPadding:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
