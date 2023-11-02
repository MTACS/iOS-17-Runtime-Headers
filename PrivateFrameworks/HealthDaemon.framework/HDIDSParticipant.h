
@interface HDIDSParticipant : NSObject {
    NSString * _destinationIdentifier;
    IDSDevice * _device;
    NSString * _deviceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *destinationIdentifier;
@property (nonatomic, readonly) IDSDevice *device;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)destinationIdentifier;
- (id)device;
- (id)deviceIdentifier;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
