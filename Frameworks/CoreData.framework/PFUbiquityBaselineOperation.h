
@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
    NSManagedObjectModel * _model;
    NSString * _modelVersionHash;
}

- (void)dealloc;
- (id)description;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;

@end
