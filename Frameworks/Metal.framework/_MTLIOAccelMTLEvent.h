
@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEventSPI> {
    MTLIOAccelDevice<MTLDevice> * _device;
    bool  _enableBarrier;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _labelLock;
    unsigned long long  _labelTraceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic) bool enableBarrier;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) bool supportsRollback;

- (void)dealloc;
- (id)device;
- (bool)enableBarrier;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 options:(long long)arg2;
- (id)label;
- (id)retainedLabel;
- (void)setEnableBarrier:(bool)arg1;
- (void)setLabel:(id)arg1;

@end
