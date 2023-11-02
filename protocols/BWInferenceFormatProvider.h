
@protocol BWInferenceFormatProvider <NSObject>

@required

- (BWFormat *)inputFormatForAttachedMediaKey:(NSString *)arg1;
- (BWInferenceVideoFormat *)inputInferenceVideoFormatForAttachedMediaKey:(NSString *)arg1;
- (BWVideoFormat *)inputVideoFormatForAttachedMediaKey:(NSString *)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(NSString *)arg1;
- (BWFormat *)outputFormatForAttachedMediaKey:(NSString *)arg1;
- (BWVideoFormat *)outputVideoFormatForAttachedMediaKey:(NSString *)arg1;

@end
