
@interface PHMomentChangeRequest : PHChangeRequest <PHUpdateChangeRequest>

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic) float aggregationScore;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) unsigned short processedLocation;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)changeRequestForMoment:(id)arg1;

- (float)aggregationScore;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)localizedLocationNames;
- (id)managedEntityName;
- (unsigned short)processedLocation;
- (void)setAggregationScore:(float)arg1;
- (void)setLocalizedLocationNames:(id)arg1;
- (void)setProcessedLocation:(unsigned short)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
