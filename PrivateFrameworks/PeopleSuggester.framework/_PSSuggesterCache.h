
@interface _PSSuggesterCache : NSObject {
    NSArray * _cachedPeopleSuggestions;
    NSString * _cachedSessionID;
    unsigned long long  _leeway;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    _PSSuggester * _suggester;
    NSObject<OS_dispatch_source> * _timer;
}

+ (id)defaultService;
+ (id)defaultServiceWithMaxSuggestionCount:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)getCachedSuggestions;
- (id)initWithMaxSuggestionCount:(id)arg1;
- (void)refetch;

@end
