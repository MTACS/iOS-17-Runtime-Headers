
@interface BRCClientState : NSObject {
    NSMutableDictionary * _dict;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
