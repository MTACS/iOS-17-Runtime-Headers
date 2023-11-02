
@interface _PFUbiquityStack : NSObject {
    NSString * _localPeerID;
    PFUbiquityMetadataFactoryEntry * _metadataEntry;
    NSManagedObjectContext * _metadataMOC;
    PFUbiquityLocation * _metadataStoreFileLocation;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootURL;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
