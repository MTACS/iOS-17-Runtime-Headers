
@interface HMIMLModel : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MLModel * _model;
    NSURL * _modelURL;
    HMFOSTransaction * _transaction;
    HMFTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MLModel *model;
@property (readonly) NSURL *modelURL;
@property (readonly) Class superclass;
@property (retain) HMFOSTransaction *transaction;
@property (readonly) MLModel *underlyingModel;
@property (readonly) HMFTimer *watchdogTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_ensureModelWithError:(id*)arg1;
- (id)initWithModelURL:(id)arg1;
- (id)model;
- (id)modelURL;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (void)setModel:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)transaction;
- (id)underlyingModel;
- (id)watchdogTimer;

@end
