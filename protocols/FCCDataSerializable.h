
@protocol FCCDataSerializable <NSObject>

@required

- (id)initWithTransportData:(NSData *)arg1;
- (NSData *)transportData;

@end
