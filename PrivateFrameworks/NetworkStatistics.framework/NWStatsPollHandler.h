
@interface NWStatsPollHandler : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _deliveryBlock;
    long long  _instanceNumber;
    NWStatsManager * _manager;
    unsigned long long  _ntstatContext;
    bool  _synchronous;
}

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ deliveryBlock;
@property long long instanceNumber;
@property (retain) NWStatsManager *manager;
@property (nonatomic) unsigned long long ntstatContext;
@property bool synchronous;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id /* block */)deliveryBlock;
- (id)description;
- (void)handleSnapshot:(id)arg1;
- (id)init;
- (long long)instanceNumber;
- (id)manager;
- (unsigned long long)ntstatContext;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDeliveryBlock:(id /* block */)arg1;
- (void)setInstanceNumber:(long long)arg1;
- (void)setManager:(id)arg1;
- (void)setNtstatContext:(unsigned long long)arg1;
- (void)setSynchronous:(bool)arg1;
- (bool)synchronous;

@end
