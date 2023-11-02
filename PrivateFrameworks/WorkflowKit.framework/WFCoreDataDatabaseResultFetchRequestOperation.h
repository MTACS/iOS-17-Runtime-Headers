
@interface WFCoreDataDatabaseResultFetchRequestOperation : NSObject <WFCoreDataDatabaseResultFetchOperation> {
    NSFetchRequest * _fetchRequest;
    NSSet * _relationshipKeysAffectingDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *relationshipKeysAffectingDescriptors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countWithContext:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)entity;
- (id)fetchRequest;
- (unsigned long long)hash;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 relationshipKeysAffectingDescriptors:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)relationshipKeysAffectingDescriptors;
- (id)resultsWithContext:(id)arg1 error:(id*)arg2;

@end
