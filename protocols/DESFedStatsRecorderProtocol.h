
@protocol DESFedStatsRecorderProtocol

@required

- (bool)record:(NSString *)arg1 data:(NSArray *)arg2 dataTypeContent:(NSDictionary *)arg3 metadata:(NSDictionary *)arg4 errorOut:(id*)arg5;
- (bool)record:(NSString *)arg1 data:(NSArray *)arg2 encodingSchema:(NSDictionary *)arg3 metadata:(NSDictionary *)arg4 errorOut:(id*)arg5;

@end
