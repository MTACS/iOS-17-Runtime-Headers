
@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary * _usageElementMap;
}

@property (readonly) bool valid;

- (void).cxx_destruct;
- (id)get:(id*)arg1;
- (id)getHIDDevices;
- (id)initWithContainerID:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (bool)invalidate:(id*)arg1;
- (bool)set:(id)arg1 error:(id*)arg2;
- (bool)setupInterface;
- (bool)valid;

@end
