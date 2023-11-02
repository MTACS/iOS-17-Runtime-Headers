
@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    long long  _frameRate;
    ARCircularArray * _mostRecentTimestamps;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mostRecentTimestampsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFrameRate:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)shouldProcessData:(id)arg1;
- (bool)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
