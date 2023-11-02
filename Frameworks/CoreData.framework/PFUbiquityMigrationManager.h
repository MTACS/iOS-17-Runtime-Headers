
@interface PFUbiquityMigrationManager : NSObject {
    NSManagedObjectModel * _destinationModel;
    NSString * _localPeerID;
    PFUbiquityLocation * _rootLocation;
    NSManagedObjectModel * _sourceModel;
}

- (void)dealloc;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5;

@end
