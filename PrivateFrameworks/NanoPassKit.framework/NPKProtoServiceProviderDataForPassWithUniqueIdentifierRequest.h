
@interface NPKProtoServiceProviderDataForPassWithUniqueIdentifierRequest : PBRequest <NSCopying> {
    bool  _encrypted;
    struct { 
        unsigned int encrypted : 1; 
    }  _has;
    NSString * _passUniqueID;
}

@property (nonatomic) bool encrypted;
@property (nonatomic) bool hasEncrypted;
@property (nonatomic, retain) NSString *passUniqueID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)encrypted;
- (bool)hasEncrypted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passUniqueID;
- (bool)readFrom:(id)arg1;
- (void)setEncrypted:(bool)arg1;
- (void)setHasEncrypted:(bool)arg1;
- (void)setPassUniqueID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
