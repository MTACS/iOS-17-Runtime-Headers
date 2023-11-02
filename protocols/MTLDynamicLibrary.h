
@protocol MTLDynamicLibrary <NSObject>

@required

- (<MTLDevice> *)device;
- (NSString *)installName;
- (NSString *)label;
- (bool)serializeToURL:(NSURL *)arg1 error:(id*)arg2;
- (void)setLabel:(NSString *)arg1;

@end
