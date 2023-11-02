
@interface MRUCoordinatedUpdateController : NSObject {
    double  _cadence;
    NSString * _context;
    <MRUCoordinatedUpdateControllerDelegate> * _delegate;
    NSMutableArray * _queue;
    MPWeakTimer * _timer;
}

@property (nonatomic) double cadence;
@property (nonatomic, copy) NSString *context;
@property (nonatomic) <MRUCoordinatedUpdateControllerDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *queue;
@property (nonatomic, retain) MPWeakTimer *timer;

- (void).cxx_destruct;
- (void)addUpdate:(id /* block */)arg1 completion:(id /* block */)arg2;
- (double)cadence;
- (id)context;
- (id)delegate;
- (id)init;
- (void)processQueue;
- (id)queue;
- (void)resetTimer;
- (void)setCadence:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setupTimer;
- (id)timer;

@end
