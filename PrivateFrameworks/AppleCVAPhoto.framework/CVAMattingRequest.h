
@interface CVAMattingRequest : NSObject {
    struct __CVBuffer { } * _destinationAlphaMattePixelBuffer;
    CVADisparityPostprocessingRequest * _disparityPostprocessingRequest;
    struct __CVBuffer { } * _segmentationPixelBuffer;
    struct __CVBuffer { } * _skinSegmentationPixelBuffer;
}

@property (readonly) struct __CVBuffer { }*destinationAlphaMattePixelBuffer;
@property (readonly) CVADisparityPostprocessingRequest *disparityPostprocessingRequest;
@property (readonly) struct __CVBuffer { }*segmentationPixelBuffer;
@property (readonly) struct __CVBuffer { }*skinSegmentationPixelBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationAlphaMattePixelBuffer;
- (id)disparityPostprocessingRequest;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 destinationAlphaMattePixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(struct __CVBuffer { }*)arg2 destinationAlphaMattePixelBuffer:(struct __CVBuffer { }*)arg3 error:(id*)arg4;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(struct __CVBuffer { }*)arg2 skinSegmentationPixelBuffer:(struct __CVBuffer { }*)arg3 destinationAlphaMattePixelBuffer:(struct __CVBuffer { }*)arg4 error:(id*)arg5;
- (struct __CVBuffer { }*)segmentationPixelBuffer;
- (struct __CVBuffer { }*)skinSegmentationPixelBuffer;

@end
