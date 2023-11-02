
@interface MTLToolsLateEvalEvent : MTLToolsSharedEvent <MTLLateEvalEvent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property unsigned long long signaledValue;
@property (readonly) Class superclass;

@end
