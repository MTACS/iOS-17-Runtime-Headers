
@interface _IOGPUMetalMTLEvent : IOGPUMTLEvent <MTLEvent> {
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
@property (readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 options:(unsigned long long)arg2;
- (id)label;
- (id)retainedLabel;
- (void)setLabel:(id)arg1;

@end
