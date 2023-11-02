
@interface RPConnectionMetrics : NSObject {
    unsigned long long  _eventCount;
    NSMutableDictionary * _metrics;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reportLock;
    NSObject<OS_dispatch_queue> * _reportQueue;
    NSObject<OS_dispatch_source> * _reportTimer;
    bool  _sendReport;
}

@property (nonatomic, retain) NSMutableDictionary *metrics;

+ (id)sharedMetrics;

- (void).cxx_destruct;
- (id)init;
- (unsigned char)lengthToBucketIndex:(unsigned long long)arg1;
- (unsigned char)linkTypeToBucketIndex:(int)arg1;
- (void)logRequestOnLinkType:(int)arg1 length:(unsigned long long)arg2 rtt:(unsigned long long)arg3;
- (id)metrics;
- (void)reportMetrics;
- (unsigned char)rttToBucketIndex:(unsigned long long)arg1;
- (void)setMetrics:(id)arg1;

@end
