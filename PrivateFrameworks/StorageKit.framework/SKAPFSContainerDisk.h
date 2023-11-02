
@interface SKAPFSContainerDisk : SKDisk {
    NSString * _designatedPSUUID;
}

@property (readonly) NSString *apfsUUID;
@property (retain) NSString *designatedPSUUID;

- (void).cxx_destruct;
- (id)apfsUUID;
- (id)copyVolumesWithIncludeSnapshots:(bool)arg1;
- (id)designatedPSUUID;
- (id)designatedPhysicalStore;
- (id)dictionaryRepresentation;
- (id)innerDescriptionWithPrivateData:(bool)arg1;
- (bool)isVirtualDiskType;
- (id)minimalDictionaryRepresentation;
- (id)physicalStores;
- (void)setDesignatedPSUUID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)volumes;
- (id)volumesExcludingSnapshots;

@end
