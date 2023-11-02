
@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID {
    NSUUID * _uuid;
}

@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)uuid;

@end
