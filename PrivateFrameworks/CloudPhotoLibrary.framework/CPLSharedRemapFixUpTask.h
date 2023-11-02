
@interface CPLSharedRemapFixUpTask : NSObject {
    CPLScopedIdentifier * _privateCloudScopedIdentifier;
    CPLScopedIdentifier * _proposedPrivateScopedIdentifier;
    CPLScopedIdentifier * _realCloudScopedIdentifier;
    Class  _recordClass;
    CPLScopedIdentifier * _sharedCloudScopedIdentifier;
}

@property (nonatomic, readonly) CPLScopedIdentifier *privateCloudScopedIdentifier;
@property (nonatomic, readonly) CPLScopedIdentifier *proposedPrivateScopedIdentifier;
@property (nonatomic, readonly) CPLScopedIdentifier *realCloudScopedIdentifier;
@property (nonatomic, readonly) Class recordClass;
@property (nonatomic, readonly) CPLScopedIdentifier *sharedCloudScopedIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSharedCloudScopedIdentifier:(id)arg1 realCloudScopedIdentifier:(id)arg2 privateCloudScopedIdentifier:(id)arg3 proposedPrivateScopedIdentifier:(id)arg4 recordClass:(Class)arg5;
- (id)privateCloudScopedIdentifier;
- (id)proposedPrivateScopedIdentifier;
- (id)realCloudScopedIdentifier;
- (Class)recordClass;
- (id)redactedDescription;
- (id)sharedCloudScopedIdentifier;

@end
