
@interface _COMessagingServiceMeter : NSObject {
    NSDictionary * _limits;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _peaks;
    int  _registration;
}

@property (nonatomic, readonly, copy) NSDictionary *limits;
@property (nonatomic, readonly) NSMutableDictionary *peaks;
@property (nonatomic, readonly) int registration;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (bool)clientIdentifier:(id)arg1 canReceiveLength:(unsigned long long)arg2;
- (bool)clientIdentifier:(id)arg1 canSendLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (bool)isEvaluatingIdentifier:(id)arg1;
- (id)limits;
- (id)peaks;
- (unsigned long long)receiveLimitForIdentifier:(id)arg1;
- (int)registration;
- (unsigned long long)sendLimitForIdentifier:(id)arg1;

@end
