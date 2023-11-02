
@interface PKPassFaceViewCategoryVisualizationRendererState : PKPassFaceViewRendererState {
    struct { 
        double startTime; 
        unsigned long long bucketCount; 
        double *magnitudeForBucket; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**colorForBucket; 
    }  _state;
}

- (void)dealloc;

@end
