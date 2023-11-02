
@interface NWNumericAccumulator : NSObject {
    NSMutableDictionary * _accumulations;
    NSMutableArray * _kvoWatchers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _kvo_lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMutableArray * _overriddenStates;
}

@property (nonatomic, retain) NSMutableDictionary *accumulations;
@property (nonatomic, retain) NSMutableArray *kvoWatchers;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *overriddenStates;

- (void).cxx_destruct;
- (id)accumulations;
- (void)addAccumulation:(id)arg1 forKey:(id)arg2 stateCallback:(id /* block */)arg3;
- (void)addAccumulation:(id)arg1 withName:(id)arg2 forKey:(id)arg3 stateCallback:(id /* block */)arg4;
- (void)addCount:(id)arg1 toAccumulation:(id)arg2;
- (id)aggregatedStates;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1;
- (id)kvoWatchers;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overriddenStates;
- (id)overrideStateWithName:(id)arg1;
- (void)registerObserverForKeyPath:(id)arg1 ofObject:(id)arg2 alreadyRegistered:(bool)arg3;
- (void)reset;
- (void)setAccumulations:(id)arg1;
- (void)setKvoWatchers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOverriddenStates:(id)arg1;
- (void)updateState:(id)arg1 forName:(id)arg2;
- (id)watcherForObject:(id)arg1 andKeyPath:(id)arg2;

@end
