
@interface RMDummyDataManager : NSObject {
    RMConnectionClient * _connectionClient;
    bool  _isReceivingRelatveData;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _relativeDataCallback;
}

@property (nonatomic, retain) RMConnectionClient *connectionClient;
@property (nonatomic) bool isReceivingRelatveData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ relativeDataCallback;

- (void).cxx_destruct;
- (id)connectionClient;
- (id)dummyDataConfiguration;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (bool)isReceivingRelatveData;
- (id)queue;
- (id /* block */)relativeDataCallback;
- (void)setConnectionClient:(id)arg1;
- (void)setIsReceivingRelatveData:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setRelativeDataCallback:(id /* block */)arg1;
- (void)startReceivingDummyDataUpdates:(id /* block */)arg1;
- (void)stopReceivingDummyDataUpdates;

@end
