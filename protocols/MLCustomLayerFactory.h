
@protocol MLCustomLayerFactory

@required

- (NSObject<MLCustomLayer> *)createCustomLayer:(NSString *)arg1 withParameters:(NSDictionary *)arg2 error:(id*)arg3;

@end
