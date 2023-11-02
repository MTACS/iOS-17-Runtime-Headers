
@interface NPKProtoPassAssociatedDataRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int passRequestedData : 1; 
    }  _has;
    unsigned long long  _passRequestedData;
    NSString * _passUniqueID;
}

@property (nonatomic) bool hasPassRequestedData;
@property (nonatomic) unsigned long long passRequestedData;
@property (nonatomic, retain) NSString *passUniqueID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassRequestedData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)passRequestedData;
- (id)passUniqueID;
- (bool)readFrom:(id)arg1;
- (void)setHasPassRequestedData:(bool)arg1;
- (void)setPassRequestedData:(unsigned long long)arg1;
- (void)setPassUniqueID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
