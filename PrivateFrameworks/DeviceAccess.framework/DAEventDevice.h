
@interface DAEventDevice : DAEvent {
    DADevice * _device;
}

@property (nonatomic, readonly) DADevice *device;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 device:(id)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;

@end
