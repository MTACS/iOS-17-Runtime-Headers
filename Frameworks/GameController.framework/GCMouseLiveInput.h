
@interface GCMouseLiveInput : GCMouseInputState <GCDevicePhysicalInput>

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

@end
