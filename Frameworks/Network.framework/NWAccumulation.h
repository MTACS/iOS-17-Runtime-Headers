
@interface NWAccumulation : NSObject {
    NSString * _currentState;
    NSMutableDictionary * _durations;
    bool  _isSnapshot;
    double  _lastUpdateTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
}

@property (nonatomic, retain) NSString *currentState;
@property (nonatomic, retain) NSMutableDictionary *durations;
@property (nonatomic) bool isSnapshot;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)currentState;
- (void)dealloc;
- (id)description;
- (id)durations;
- (id)initWithName:(id)arg1;
- (bool)isSnapshot;
- (double)lastUpdateTime;
- (id)name;
- (void)reset;
- (void)setCurrentState:(id)arg1;
- (void)setDurations:(id)arg1;
- (void)setIsSnapshot:(bool)arg1;
- (void)setLastUpdateTime:(double)arg1;
- (void)setName:(id)arg1;
- (id)snapshot;
- (void)updateWithState:(id)arg1 atTime:(double)arg2;

@end
