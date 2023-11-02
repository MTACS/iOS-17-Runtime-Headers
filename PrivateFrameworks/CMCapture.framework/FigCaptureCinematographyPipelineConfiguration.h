
@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    struct { 
        int width; 
        int height; 
    }  _captureDimensionsForFSDNetSecondary;
    int  _depthType;
    NSArray * _objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
}

- (void)dealloc;

@end
