
@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {
    NSMutableSet * _expirationEntries;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)expire;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)startExpiring:(id)arg1 cache:(id)arg2;
- (void)stopExpiring:(id)arg1 cache:(id)arg2;

@end
