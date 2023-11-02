
@interface NPKProtoPrepareProvisioningTargetRequest : PBRequest <NSCopying> {
    bool  _checkFamilyCircle;
    struct { 
        unsigned int checkFamilyCircle : 1; 
    }  _has;
    NSData * _targetData;
}

@property (nonatomic) bool checkFamilyCircle;
@property (nonatomic) bool hasCheckFamilyCircle;
@property (nonatomic, retain) NSData *targetData;

- (void).cxx_destruct;
- (bool)checkFamilyCircle;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCheckFamilyCircle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCheckFamilyCircle:(bool)arg1;
- (void)setHasCheckFamilyCircle:(bool)arg1;
- (void)setTargetData:(id)arg1;
- (id)targetData;
- (void)writeTo:(id)arg1;

@end
