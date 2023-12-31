
@interface PKIDSDestination : NSObject {
    NSString * _deviceIdentifier;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *name;

+ (id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)deviceIdentifier;
- (id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2;
- (id)name;

@end
