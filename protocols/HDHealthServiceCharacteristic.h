
@protocol HDHealthServiceCharacteristic <NSObject>

@required

+ (id)buildWithBinaryValue:(NSData *)arg1 updateTime:(NSDate *)arg2 error:(id*)arg3;
+ (CBUUID *)uuid;

- (NSData *)getBinaryValueWithError:(id*)arg1;

@end
