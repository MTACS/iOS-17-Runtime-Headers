
@interface NPKProtoPassSettingsChangedRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int passSettings : 1; 
    }  _has;
    unsigned long long  _passSettings;
    NSString * _uniqueID;
}

@property (nonatomic) bool hasPassSettings;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic) unsigned long long passSettings;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassSettings;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)passSettings;
- (bool)readFrom:(id)arg1;
- (void)setHasPassSettings:(bool)arg1;
- (void)setPassSettings:(unsigned long long)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
