
@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable <NSCopying> {
    struct { 
        unsigned int shareDirection : 1; 
        unsigned int shareStatus : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _otherHandle;
    NSData * _padding;
    long long  _shareDirection;
    long long  _shareStatus;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasOtherHandle;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic) bool hasShareDirection;
@property (nonatomic) bool hasShareStatus;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic) long long shareDirection;
@property (nonatomic) long long shareStatus;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOtherHandle;
- (bool)hasPadding;
- (bool)hasShareDirection;
- (bool)hasShareStatus;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)otherHandle;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setHasShareDirection:(bool)arg1;
- (void)setHasShareStatus:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setShareDirection:(long long)arg1;
- (void)setShareStatus:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (long long)shareDirection;
- (long long)shareStatus;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end