
@protocol VNDetectorProviding <NSObject>

@required

- (VNDetector *)detectorOfClass:(Class)arg1 configuredWithOptions:(NSDictionary *)arg2 error:(id*)arg3;
- (VNDetector *)detectorOfType:(NSString *)arg1 configuredWithOptions:(NSDictionary *)arg2 error:(id*)arg3;
- (NSArray *)loadedDetectors;

@end
