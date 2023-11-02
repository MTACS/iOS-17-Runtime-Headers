
@interface AVVideoCompositionInstructionInternal : NSObject {
    struct CGColor { } * backgroundColor;
    NSString * blendingTransferFunction;
    bool  enablePostProcessing;
    NSArray * layerInstructions;
    NSArray * requiredSourceSampleDataTrackIDs;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  timeRange;
}

@end
