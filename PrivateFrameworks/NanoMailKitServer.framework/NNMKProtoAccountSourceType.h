
@interface NNMKProtoAccountSourceType : PBCodable <NSCopying> {
    NSString * _accountId;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int sourceType : 1; 
    }  _has;
    unsigned int  _sourceType;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic) bool hasSourceType;
@property (nonatomic) unsigned int sourceType;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasAccountId;
- (bool)hasFullSyncVersion;
- (bool)hasSourceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setSourceType:(unsigned int)arg1;
- (unsigned int)sourceType;
- (void)writeTo:(id)arg1;

@end
