
@interface PHChangeRequest : NSObject <PHInsertChangeRequest> {
    PHChangeRequestHelper * _helper;
    PHPhotoLibrary * _photoLibrary;
    bool  _shouldPerformConcurrentWork;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)sanitizedFailureWithError:(id)arg1;

- (void).cxx_destruct;
- (long long)accessScopeOptionsRequirement;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)clientName;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)didMutate;
- (void)didSendChangeToServiceHandlerWithResult:(bool)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (void)finalizeRequestWithBatchSuccess:(bool)arg1;
- (id)helper;
- (id)init;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNewRequest;
- (id)managedEntityName;
- (id)objectID;
- (void)performConcurrentWork;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)setShouldPerformConcurrentWork:(bool)arg1;
- (bool)shouldPerformConcurrentWork;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
