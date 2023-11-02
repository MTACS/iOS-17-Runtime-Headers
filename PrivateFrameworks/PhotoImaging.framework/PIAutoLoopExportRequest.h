
@interface PIAutoLoopExportRequest : NUVideoExportRequest {
    NSURL * _destinationLongExposureURL;
    NSURL * _destinationMaskURL;
    NSString * _destinationUTI;
}

@property (readonly) NSURL *destinationLongExposureURL;
@property (readonly) NSURL *destinationMaskURL;
@property (readonly) NSString *destinationUTI;
@property (readonly) NUColorSpace *outputColorSpace;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationLongExposureURL;
- (id)destinationMaskURL;
- (id)destinationUTI;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5;
- (id)initWithRequest:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)outputColorSpace;
- (void)submit:(id /* block */)arg1;

@end
