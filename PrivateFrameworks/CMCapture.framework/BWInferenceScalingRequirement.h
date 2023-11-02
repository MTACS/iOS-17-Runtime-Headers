
@interface BWInferenceScalingRequirement : NSObject {
    NSArray * _orderedVideoRequirements;
}

@property (nonatomic, readonly) NSArray *orderedVideoRequirements;

- (void)dealloc;
- (id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2 intermediatePixelBufferCompressionType:(int)arg3;
- (id)orderedVideoRequirements;

@end
