
@interface CRKCreateASMClassOperation : CATOperation {
    CRKASMCourseCreateProperties * _properties;
    <CRKClassKitRosterRequirements> * _requirements;
}

@property (nonatomic, readonly, copy) CRKASMCourseCreateProperties *properties;
@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *requirements;

- (void).cxx_destruct;
- (bool)applyProperties:(id)arg1 toClass:(id)arg2 error:(id*)arg3;
- (void)constructClassWithInstructor:(id)arg1;
- (void)fetchInstructor;
- (id)initWithProperties:(id)arg1 requirements:(id)arg2;
- (bool)isAsynchronous;
- (bool)location:(id)arg1 hasMatchInLocations:(id)arg2;
- (void)main;
- (id)properties;
- (id)requirements;
- (void)validateDesiredLocationExistsForInstructor:(id)arg1;
- (void)validateParameters;

@end
