
@interface DAEventDevicesPresent : DAEvent {
    bool  _devicesPresent;
}

@property (nonatomic, readonly) bool devicesPresent;

- (id)descriptionWithLevel:(int)arg1;
- (bool)devicesPresent;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithPresent:(bool)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;

@end
