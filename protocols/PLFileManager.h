
@protocol PLFileManager <NSObject>

@required

- (NSDictionary *)attributesOfItemAtPath:(NSString *)arg1 error:(id*)arg2;
- (bool)fileExistsAtPath:(NSString *)arg1;
- (bool)fileExistsAtPath:(NSString *)arg1 isDirectory:(bool*)arg2;

@end
