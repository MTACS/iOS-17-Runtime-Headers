
@interface _GCDevicePhysicalInputFacade : _GCDevicePhysicalInputView <GCDevicePhysicalInput, GCDevicePhysicalInputStateDiff>

@property (readonly) GCPhysicalInputElementCollection *axes;
@property (readonly) GCPhysicalInputElementCollection *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <GCDevice> *device;
@property (readonly) GCPhysicalInputElementCollection *dpads;
@property (copy) id /* block */ elementValueDidChangeHandler;
@property (readonly) GCPhysicalInputElementCollection *elements;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ inputStateAvailableHandler;
@property long long inputStateQueueDepth;
@property (readonly) double lastEventLatency;
@property (readonly) double lastEventTimestamp;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) GCPhysicalInputElementCollection *switches;

+ (bool)automaticallyNotifiesObserversOfQueue;

- (id)alternatePhysicalInputWithAttribute:(id)arg1;
- (id)axes;
- (id)buttons;
- (id)capture;
- (long long)changeForElement:(id)arg1;
- (id)changedElements;
- (id)device;
- (id)dpads;
- (id /* block */)elementValueDidChangeHandler;
- (id)elements;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (id /* block */)inputStateAvailableHandler;
- (long long)inputStateQueueDepth;
- (double)lastEventLatency;
- (double)lastEventTimestamp;
- (id)nextInputState;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)queue;
- (void)setElementValueDidChangeHandler:(id /* block */)arg1;
- (void)setInputStateAvailableHandler:(id /* block */)arg1;
- (void)setInputStateQueueDepth:(long long)arg1;
- (void)setQueue:(id)arg1;
- (id)switches;

@end
