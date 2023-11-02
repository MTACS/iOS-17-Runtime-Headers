
@interface CAMHistogramResult : NSObject <CAMMetadataObjectResult> {
    AVMetadataVideoPreviewHistogramObject * __metadataHistogramObject;
    double  _highlightClipping;
    double  _shadowClipping;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) AVMetadataVideoPreviewHistogramObject *_metadataHistogramObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double highlightClipping;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (nonatomic, readonly) double shadowClipping;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_metadataHistogramObject;
- (double)highlightClipping;
- (id)initWithHistogramObject:(id)arg1 forDeviceFormat:(id)arg2;
- (id)metadataType;
- (void)set_metadataHistogramObject:(id)arg1;
- (double)shadowClipping;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end
