
@interface CRKRemoveASMClassOperation : CATOperation {
    NSString * _objectID;
    <CRKClassKitRosterRequirements> * _requirements;
}

@property (nonatomic, readonly, copy) NSString *objectID;
@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *requirements;

- (void).cxx_destruct;
- (id)classWithObjectID:(id)arg1 inClasses:(id)arg2;
- (void)didFetchClasses:(id)arg1 error:(id)arg2;
- (void)fetchClasses;
- (id)initWithObjectID:(id)arg1 requirements:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (id)objectID;
- (void)removeClass:(id)arg1;
- (id)requirements;

@end
