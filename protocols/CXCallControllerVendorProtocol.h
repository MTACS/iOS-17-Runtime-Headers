
@protocol CXCallControllerVendorProtocol <NSObject>

@required

- (oneway void)addOrUpdateCall:(CXCall *)arg1;
- (oneway void)removeCall:(CXCall *)arg1;

@end
