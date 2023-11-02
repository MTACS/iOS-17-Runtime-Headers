
@interface BWDeferredProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionSensorRawDimensions;
}

@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionSensorRawDimensions;

- (void)setUltraHighResolutionSensorRawDimensions:(struct { int x1; int x2; })arg1;
- (struct { int x1; int x2; })ultraHighResolutionSensorRawDimensions;

@end
