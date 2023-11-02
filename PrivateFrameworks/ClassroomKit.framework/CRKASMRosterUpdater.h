
@interface CRKASMRosterUpdater : NSObject {
    NSObject<CRKClassKitRosterRequirements> * _requirements;
}

@property (nonatomic, readonly) NSObject<CRKClassKitRosterRequirements> *requirements;

- (void).cxx_destruct;
- (id)courseWithIdentifier:(id)arg1 inRoster:(id)arg2;
- (void)createClassOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (void)createClassWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)errorWrappingCompletionForCompletion:(id /* block */)arg1 selectorName:(id)arg2;
- (id)initWithRequirements:(id)arg1;
- (id)objectIDForCourseWithIdentifier:(id)arg1 inRoster:(id)arg2 error:(id*)arg3;
- (void)removeCourseWithIdentifier:(id)arg1 roster:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (id)requirements;
- (void)updateClassOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 roster:(id)arg3 completion:(id /* block */)arg4;

@end
