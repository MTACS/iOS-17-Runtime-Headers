
@protocol BKIOHIDServiceMatcherDataProviding <NSObject>

@required

- (NSArray *)IOHIDServicesMatching:(NSDictionary *)arg1;
- (void)registerIOHIDServicesCallback:(int (*)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void*)arg3 refCon:(void*)arg4;
- (void)unregisterIOHIDServicesCallback:(int (*)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void*)arg3 refCon:(void*)arg4;

@end
