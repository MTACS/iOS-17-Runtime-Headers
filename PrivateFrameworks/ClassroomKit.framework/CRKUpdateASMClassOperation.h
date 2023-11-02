
@interface CRKUpdateASMClassOperation : CATOperation {
    NSString * _objectID;
    CRKASMCourseUpdateProperties * _properties;
    <CRKClassKitRosterRequirements> * _requirements;
}

@property (nonatomic, readonly, copy) NSString *objectID;
@property (nonatomic, readonly, copy) CRKASMCourseUpdateProperties *properties;
@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *requirements;

- (void).cxx_destruct;
- (void)applyPropertiesToClass:(id)arg1;
- (id)classWithObjectID:(id)arg1 inClasses:(id)arg2;
- (void)didFetchClasses:(id)arg1 error:(id)arg2;
- (void)fetchClasses;
- (id)initWithObjectID:(id)arg1 properties:(id)arg2 requirements:(id)arg3;
- (bool)isAsynchronous;
- (void)main;
- (id)makePropertyApplicator;
- (id)objectID;
- (id)properties;
- (id)requirements;
- (void)saveClass:(id)arg1;

@end
