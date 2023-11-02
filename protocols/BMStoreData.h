
@protocol BMStoreData <NSObject>

@required

+ (id)eventWithData:(NSData *)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (NSData *)serialize;

@optional

- (NSData *)json;
- (NSDictionary *)jsonDict;

@end
