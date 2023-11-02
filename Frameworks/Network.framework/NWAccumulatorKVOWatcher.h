
@interface NWAccumulatorKVOWatcher : NSObject {
    id /* block */  _callback;
    NSString * _keyPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSObject * _object;
    NSString * _state;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSString *keyPath;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSObject *object;
@property (nonatomic, retain) NSString *state;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)description;
- (id)init;
- (id)keyPath;
- (id)name;
- (id)object;
- (void)setCallback:(id /* block */)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)updateWithState:(id)arg1;

@end
