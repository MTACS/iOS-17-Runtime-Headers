
@interface WFCoreDataDatabaseResultConcatFetchRequestOperation : NSObject <WFCoreDataDatabaseResultFetchOperation> {
    NSArray * _fetchRequests;
    NSSet * _relationshipKeysAffectingDescriptors;
    long long  _resultsLimit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (nonatomic, readonly) NSArray *fetchRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *relationshipKeysAffectingDescriptors;
@property (nonatomic, readonly) long long resultsLimit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countWithContext:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)entity;
- (id)fetchRequests;
- (unsigned long long)hash;
- (id)initWithFetchRequests:(id)arg1 resultsLimit:(long long)arg2;
- (id)initWithFetchRequests:(id)arg1 resultsLimit:(long long)arg2 relationshipKeysAffectingDescriptors:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)relationshipKeysAffectingDescriptors;
- (long long)resultsLimit;
- (id)resultsWithContext:(id)arg1 error:(id*)arg2;

@end
