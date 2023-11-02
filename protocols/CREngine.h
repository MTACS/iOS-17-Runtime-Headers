
@protocol CREngine <NSObject, CRConfidenceThresholdProviding>

@required

+ (struct CGSize { double x1; double x2; })detectorImageSizeForOptions:(NSDictionary *)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)preheatModelsForOptions:(NSDictionary *)arg1 revision:(long long)arg2 error:(id*)arg3;
+ (NSArray *)supportedComputeDevicesForRevision:(long long)arg1;
+ (NSArray *)supportedLanguagesForRevision:(long long)arg1 error:(id*)arg2;

- (void)cancel;
- (<MLComputeDeviceProtocol> *)computeDevice;
- (id)init;
- (id)initWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (CRDocumentOutputRegion *)resultDocumentInImage:(void *)arg1 options:(void *)arg2 trackingSession:(void *)arg3 withProgressHandler:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 11: CRImage *, NSDictionary *, CRImageReaderTrackingSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*, id*
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)subfeatureOutputType;

@optional

- (CRDocumentOutputRegion *)documentForLineRegions:(NSArray *)arg1 recognitionResult:(CRRecognitionResult *)arg2;
- (CRDocumentOutputRegion *)resultDocumentForDetectionResult:(void *)arg1 image:(void *)arg2 options:(void *)arg3 progressHandler:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 11: CRDetectionResult *, CRImage *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*, id*
- (CRDetectionResult *)textDetectorResultsForImage:(CRImage *)arg1 error:(id*)arg2;

@end
