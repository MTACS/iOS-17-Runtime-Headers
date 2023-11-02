
@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol> {
    NSString * _apfsRole;
    NSString * _apfsVolumeGroupUUID;
    bool  _defaultEffaceable;
    bool  _isEncrypted;
    unsigned long long  _quotaSpace;
    unsigned long long  _reserveSpace;
    unsigned long long  _usedSpace;
}

@property (retain) NSString *apfsRole;
@property (readonly) NSString *apfsUUID;
@property (retain) NSString *apfsVolumeGroupUUID;
@property (readonly, copy) NSString *debugDescription;
@property bool defaultEffaceable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isEncrypted;
@property unsigned long long quotaSpace;
@property unsigned long long reserveSpace;
@property (readonly) Class superclass;
@property unsigned long long usedSpace;

- (void).cxx_destruct;
- (id)apfsRole;
- (id)apfsUUID;
- (id)apfsVolumeGroupUUID;
- (id)container;
- (bool)defaultEffaceable;
- (id)dictionaryRepresentation;
- (id)getAPFSVolumeRole;
- (id)innerDescriptionWithPrivateData:(bool)arg1;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (bool)matchesDictionary:(id)arg1;
- (id)minimalDictionaryRepresentation;
- (unsigned long long)quotaSpace;
- (unsigned long long)reserveSpace;
- (void)setApfsRole:(id)arg1;
- (void)setApfsVolumeGroupUUID:(id)arg1;
- (void)setDefaultEffaceable:(bool)arg1;
- (void)setIsEncrypted:(bool)arg1;
- (void)setQuotaSpace:(unsigned long long)arg1;
- (void)setReserveSpace:(unsigned long long)arg1;
- (void)setUsedSpace:(unsigned long long)arg1;
- (void)updateWithDictionary:(id)arg1;
- (unsigned long long)usedSpace;
- (id)wholeDiskIdentifier;

@end
