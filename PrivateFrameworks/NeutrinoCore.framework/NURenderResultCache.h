
@interface NURenderResultCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)flush;
- (id)init;
- (id)resultForJob:(id)arg1;
- (void)setResult:(id)arg1 forJob:(id)arg2;

@end
