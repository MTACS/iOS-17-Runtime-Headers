
@interface _GCGamepadEventGamepadHIDAdapter : NSObject <_GCGamepadEventSource> {
    id  _HIDEventObservation;
    <_GCHIDEventSource> * _HIDEventSource;
    NSArray * _observers;
}

@property (nonatomic, retain) id HIDEventObservation;
@property (nonatomic, retain) <_GCHIDEventSource> *HIDEventSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)HIDEventObservation;
- (id)HIDEventSource;
- (void)dealloc;
- (id)init;
- (id)initWithSource:(id)arg1 service:(id)arg2;
- (id)observeGamepadEvents:(id /* block */)arg1;
- (id)observers;
- (void)setHIDEventObservation:(id)arg1;
- (void)setHIDEventSource:(id)arg1;
- (void)setObservers:(id)arg1;

@end
