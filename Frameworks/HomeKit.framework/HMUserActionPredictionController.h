
@interface HMUserActionPredictionController : NSObject <HMFLogging, HMUserActionPredictionSubscriber> {
    _HMContext * _context;
    <HMUserActionPredictionControllerDelegate> * _delegate;
    NSUUID * _homeIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMUserActionPredictionProvider * _predictionProvider;
}

@property (retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMUserActionPredictionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (readonly) HMUserActionPredictionProvider *predictionProvider;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (id)delegate;
- (void)didUpdatePredictions:(id)arg1 forHomeWithIdentifier:(id)arg2;
- (void)fetchPredictionsWithCompletion:(id /* block */)arg1;
- (id)homeIdentifier;
- (id)initWithHomeIdentifier:(id)arg1 predictionProvider:(id)arg2;
- (id)predictionProvider;
- (id)predictions;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
