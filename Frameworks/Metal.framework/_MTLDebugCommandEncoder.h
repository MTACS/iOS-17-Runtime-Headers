
@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)IOLog:(id)arg1;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintf:(id)arg1;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
