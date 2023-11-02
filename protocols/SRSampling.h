
@protocol SRSampling <NSObject>

@required

- (id)initWithBinarySampleRepresentation:(NSData *)arg1 metadata:(NSDictionary *)arg2 timestamp:(double)arg3;

@optional

- (NSData *)binarySampleRepresentation;

@end
