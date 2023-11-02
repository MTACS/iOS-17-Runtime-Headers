
@interface _GCGamepadEventFusion : NSObject <_GCGamepadEventSource> {
    _GCGamepadEventFusionConfig * _config;
    struct { 
        unsigned long long mask; 
        float buttons[45]; 
    }  _fusedData;
    id * _lastEvent;
    NSArray * _observations;
    NSArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *observations;
@property (copy) NSArray *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;
- (id)observations;
- (id)observeGamepadEvents:(id /* block */)arg1;
- (id)observers;
- (void)setObservations:(id)arg1;
- (void)setObservers:(id)arg1;

@end
