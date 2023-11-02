
@interface _IOGPUMetalMTLLateEvalEvent : IOGPUMTLLateEvalEvent <MTLLateEvalEvent> {
    IOGPUMetalDevice<MTLDevice> * _device;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _labelLock;
    unsigned long long  _labelTraceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property unsigned long long signaledValue;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)label;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)retainedLabel;
- (void)setLabel:(id)arg1;

@end
