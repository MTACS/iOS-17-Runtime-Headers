
@protocol FSFFeatureStore

@required

- (bool)deleteAllStreams;
- (bool)deleteStream:(NSString *)arg1;
- (<FSFFeatureStoreStream> *)getStream:(NSString *)arg1;

@end
