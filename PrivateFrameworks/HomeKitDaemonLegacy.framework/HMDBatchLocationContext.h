
@interface HMDBatchLocationContext : NSObject {
    <HMDBatchLocationDelegate> * _delegate;
    NSDate * _startDate;
    HMFTimer * _timer;
    NSMutableArray * _tuples;
}

@property <HMDBatchLocationDelegate> *delegate;
@property (readonly, copy) NSDate *startDate;
@property (readonly) HMFTimer *timer;
@property (readonly) NSMutableArray *tuples;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)startDate;
- (id)timer;
- (id)tuples;

@end
