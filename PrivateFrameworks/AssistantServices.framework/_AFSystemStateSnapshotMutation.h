
@interface _AFSystemStateSnapshotMutation : NSObject <AFSystemStateSnapshotMutating> {
    AFSystemStateSnapshot * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSleepState : 1; 
    }  _mutationFlags;
    long long  _sleepState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getSleepState;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setSleepState:(long long)arg1;

@end
