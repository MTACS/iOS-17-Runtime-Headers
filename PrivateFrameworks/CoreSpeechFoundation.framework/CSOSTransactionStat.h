
@interface CSOSTransactionStat : NSObject {
    int  _numTransactionNow;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) int numTransactionNow;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (int)numTransaction;
- (int)numTransactionNow;
- (id)queue;
- (void)reportCreation;
- (void)reportDestroy;
- (void)setNumTransactionNow:(int)arg1;
- (void)setQueue:(id)arg1;

@end
