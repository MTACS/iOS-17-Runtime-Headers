
@protocol HMMTRFileManager <NSObject>

@required

- (NSDictionary *)dictionaryWithContentsOfURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)writeDictionary:(NSDictionary *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;

@end
