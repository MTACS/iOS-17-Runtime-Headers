
@interface IMSharedUtilitiesProtoCloudKitEncryptedChatP1 : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
        unsigned int isRecovered : 1; 
    }  _has;
    bool  _isRecovered;
    unsigned int  _version;
}

@property (nonatomic) bool hasIsRecovered;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool isRecovered;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsRecovered;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRecovered;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsRecovered:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIsRecovered:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
