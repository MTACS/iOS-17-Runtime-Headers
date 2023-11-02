
@interface DDDeviceEvent : NSObject <CUXPCCodable, NSSecureCoding> {
    DDDevice * _device;
    NSError * _error;
    long long  _eventType;
}

@property (nonatomic, readonly) DDDevice *device;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long eventType;

+ (id)allocInitWithXPCObject:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createDADeviceEvent;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)error;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 device:(id)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;

@end
