
@interface FSFStreamRegistry : NSObject

+ (id)readFileInToDict;
+ (id)registryFilePath;
+ (bool)writeDict:(id)arg1;

- (id)getRegisteredStreams;
- (bool)registerForStream:(id)arg1 withSchema:(id)arg2 error:(id*)arg3;

@end
