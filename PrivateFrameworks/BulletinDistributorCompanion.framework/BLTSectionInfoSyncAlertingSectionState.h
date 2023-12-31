
@interface BLTSectionInfoSyncAlertingSectionState : NSObject {
    id /* block */  _clientCompletion;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned long long  _state;
}

@property (nonatomic, copy) id /* block */ clientCompletion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id /* block */)clientCompletion;
- (id)clientQueue;
- (id)description;
- (void)setClientCompletion:(id /* block */)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
