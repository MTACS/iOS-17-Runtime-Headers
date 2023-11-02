
@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (getter=isAdaptive) bool adaptive;
@property unsigned long long cachePolicy;
@property (retain) NSOperationQueue *delegateQueue;
@property (getter=isDiscretionary) bool discretionary;
@property (retain) HMFLocationAuthorization *locationAuthorization;
@property unsigned long long options;

- (unsigned long long)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateQueue;
- (bool)isAdaptive;
- (bool)isDiscretionary;
- (id)locationAuthorization;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;
- (void)setAdaptive:(bool)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setLocationAuthorization:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (bool)shouldConnect;

@end
