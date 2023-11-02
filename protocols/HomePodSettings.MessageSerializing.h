
@protocol HomePodSettings.MessageSerializing

@required

- (bool)deserialize:(NSData *)arg1 withElement:(NSObject<NSSecureCoding> *)arg2 error:(id*)arg3;
- (NSData *)serialize:(NSObject<NSSecureCoding> *)arg1 error:(id*)arg2;

@end
