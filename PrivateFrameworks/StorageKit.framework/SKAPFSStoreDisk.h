
@interface SKAPFSStoreDisk : SKDisk {
    NSString * _apfsContainerIdentifier;
    NSString * _apfsContainerUUID;
}

@property (retain) NSString *apfsContainerIdentifier;
@property (retain) NSString *apfsContainerUUID;
@property (readonly) NSString *apfsUUID;

- (void).cxx_destruct;
- (id)apfsContainerIdentifier;
- (id)apfsContainerUUID;
- (id)apfsUUID;
- (bool)canResize;
- (id)container;
- (id)innerDescriptionWithPrivateData:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOurContainerWithDisk:(id)arg1;
- (id)minimalDictionaryRepresentation;
- (void)setApfsContainerIdentifier:(id)arg1;
- (void)setApfsContainerUUID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
