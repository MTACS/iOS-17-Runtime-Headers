
@interface NWAccumulator : NSObject {
    NSMutableArray * _accumulatedValues;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _kvo_lock;
    NWAccumulator * _lastSnapshot;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *accumulatedValues;
@property (nonatomic, readonly) NSArray *accumulations;
@property (nonatomic, retain) NWAccumulator *lastSnapshot;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)accumulatedValueForObject:(id)arg1 andKeyPath:(id)arg2;
- (id)accumulatedValues;
- (id)accumulations;
- (void)addAccumulation:(id)arg1 forKey:(id)arg2 stateCallback:(id /* block */)arg3;
- (void)addAccumulation:(id)arg1 withName:(id)arg2 forKey:(id)arg3 stateCallback:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1;
- (id)lastSnapshot;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerObserverForKeyPath:(id)arg1 ofObject:(id)arg2 alreadyRegistered:(bool)arg3;
- (void)reset;
- (void)setAccumulatedValues:(id)arg1;
- (void)setLastSnapshot:(id)arg1;
- (void)setName:(id)arg1;
- (id)snapshot;

@end
