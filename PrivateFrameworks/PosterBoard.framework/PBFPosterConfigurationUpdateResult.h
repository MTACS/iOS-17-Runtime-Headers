
@interface PBFPosterConfigurationUpdateResult : NSObject {
    <BSInvalidatable> * _assocPathValidityExtension;
    PRPosterConfiguration * _configuration;
    PRIncomingPosterConfiguration * _incomingAssocPosterConfiguration;
    PRIncomingPosterConfiguration * _incomingPosterConfiguration;
    <BSInvalidatable> * _pathValidityExtension;
    NSArray * _postersToDelete;
    NSArray * _roleCoordinatorChanges;
    NSArray * _updates;
}

@property (nonatomic, readonly) PRPosterConfiguration *configuration;
@property (nonatomic, readonly) PRIncomingPosterConfiguration *incomingAssocPosterConfiguration;
@property (nonatomic, readonly) PRIncomingPosterConfiguration *incomingPosterConfiguration;
@property (nonatomic, readonly) NSArray *postersToDelete;
@property (nonatomic, readonly) NSArray *roleCoordinatorChanges;
@property (nonatomic, readonly) NSArray *updates;

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)incomingAssocPosterConfiguration;
- (id)incomingPosterConfiguration;
- (id)initWithConfiguration:(id)arg1 updates:(id)arg2 changes:(id)arg3;
- (id)initWithIncomingPosterConfiguration:(id)arg1 incomingAssocPosterConfiguration:(id)arg2 postersToDelete:(id)arg3;
- (id)postersToDelete;
- (id)roleCoordinatorChanges;
- (id)updates;

@end
