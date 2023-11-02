
@protocol PTSerializable <NSObject>

@required

+ (id)objectFromData:(NSData *)arg1;

- (unsigned int)sizeOfSerializedObjectWithOptions:(NSDictionary *)arg1;
- (bool)writeToData:(NSMutableData *)arg1 withOptions:(NSDictionary *)arg2;

@end
