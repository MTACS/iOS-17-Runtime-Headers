
@protocol VNMTLDeviceWisdomParametersProviding <NSObject>

@required

- (NSDictionary *)wisdomParameterForMTLDevice:(id <MTLDevice>)arg1 error:(id*)arg2;
- (NSDictionary *)wisdomParameterForMTLDeviceWithName:(NSString *)arg1 error:(id*)arg2;

@end
