
@interface ARSyncedUltraWideForwardingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    long long  _maxFrameRate;
    ARCircularArray * _mostRecentTimestamps;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mostRecentTimestampsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)frameRateLimitAllowsProcessingThisData:(id)arg1 mostRecentTimestamps:(id)arg2 maxFrameRate:(long long)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMaxFrameRate:(long long)arg1;
- (bool)shouldProcessData:(id)arg1;
- (bool)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
