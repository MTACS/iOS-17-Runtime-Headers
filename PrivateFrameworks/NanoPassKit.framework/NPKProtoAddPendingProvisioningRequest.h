
@interface NPKProtoAddPendingProvisioningRequest : PBRequest <NSCopying> {
    NSMutableArray * _pendingProvisionings;
}

@property (nonatomic, retain) NSMutableArray *pendingProvisionings;

+ (Class)pendingProvisioningType;

- (void).cxx_destruct;
- (void)addPendingProvisioning:(id)arg1;
- (void)clearPendingProvisionings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pendingProvisioningAtIndex:(unsigned long long)arg1;
- (id)pendingProvisionings;
- (unsigned long long)pendingProvisioningsCount;
- (bool)readFrom:(id)arg1;
- (void)setPendingProvisionings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
