
@interface CRKShareTargetCollector : NSObject {
    <CRKShareTargetCollectorDelegate> * _delegate;
    NSSet * _instructorTargets;
    NSSet * _studentTargets;
}

@property (nonatomic) <CRKShareTargetCollectorDelegate> *delegate;
@property (nonatomic, copy) NSSet *instructorTargets;
@property (nonatomic, copy) NSSet *studentTargets;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFindTargets:(id)arg1;
- (void)didRemoveTargets:(id)arg1;
- (void)diffNewTargets:(id)arg1 againstOldTargets:(id)arg2;
- (id)init;
- (id)instructorTargets;
- (void)instructorTargetsDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstructorTargets:(id)arg1;
- (void)setStudentTargets:(id)arg1;
- (id)studentTargets;
- (void)studentTargetsDidChange:(id)arg1;

@end
