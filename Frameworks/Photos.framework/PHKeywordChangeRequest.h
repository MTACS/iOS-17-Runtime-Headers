
@interface PHKeywordChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedKeyword;
@property (nonatomic, copy) NSString *shortcut;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)changeRequestForKeyword:(id)arg1;
+ (id)creationRequestForKeyword;
+ (void)deleteKeywords:(id)arg1;

- (bool)_validateMutationOfTitleToKeyword:(id)arg1 error:(id*)arg2;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)managedEntityName;
- (id)placeholderForCreatedKeyword;
- (void)setShortcut:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shortcut;
- (id)title;

@end
