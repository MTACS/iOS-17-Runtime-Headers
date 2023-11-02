
@interface SKAPFSSnapshotDisk : SKAPFSDisk {
    NSString * _apfsUUID;
    long long  _sealStatus;
    NSString * _snapshotName;
}

@property (retain) NSString *apfsUUID;
@property long long sealStatus;
@property (retain) NSString *snapshotName;
@property (readonly) NSString *snapshotUUID;

- (void).cxx_destruct;
- (id)apfsUUID;
- (id)dictionaryRepresentation;
- (id)innerDescriptionWithPrivateData:(bool)arg1;
- (id)minimalDictionaryRepresentation;
- (long long)sealStatus;
- (void)setApfsUUID:(id)arg1;
- (void)setSealStatus:(long long)arg1;
- (void)setSnapshotName:(id)arg1;
- (id)snapshotName;
- (id)snapshotUUID;
- (void)updateWithDictionary:(id)arg1;

@end
