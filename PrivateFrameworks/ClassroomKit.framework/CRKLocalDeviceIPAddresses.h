
@interface CRKLocalDeviceIPAddresses : NSObject {
    NSSet * _IPAddresses;
}

@property (nonatomic, readonly, copy) NSSet *IPAddresses;

+ (id)makeIPAddresses;

- (void).cxx_destruct;
- (id)IPAddresses;
- (bool)containsIPAddress:(id)arg1;
- (id)init;

@end
