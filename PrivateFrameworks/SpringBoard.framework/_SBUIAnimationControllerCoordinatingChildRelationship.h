
@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject {
    BSTransaction<SBUIAnimationControllerCoordinating> * _coordinatingChildTransaction;
    unsigned long long  _schedulingPolicy;
}

@property (nonatomic, readonly) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction;
@property (nonatomic, readonly) unsigned long long schedulingPolicy;

- (void).cxx_destruct;
- (id)coordinatingChildTransaction;
- (id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;
- (unsigned long long)schedulingPolicy;

@end
