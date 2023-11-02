
@interface VIAnnotation : NSObject <NSCopying> {
    VIBarcodeAnnotation * _barcodeAnnotation;
    NSArray * _faceAnnotations;
    NSArray * _humanAnnotations;
    NSArray * _nsfwAnnotations;
    VIScenenetAnnotation * _scenenetAnnotation;
    VITextBlockAnnotation * _textBlockAnnotation;
}

@property (nonatomic, readonly) VIBarcodeAnnotation *barcodeAnnotation;
@property (nonatomic, readonly) NSArray *faceAnnotations;
@property (nonatomic, readonly) NSArray *humanAnnotations;
@property (nonatomic, readonly) NSArray *nsfwAnnotations;
@property (nonatomic, readonly) VIScenenetAnnotation *scenenetAnnotation;
@property (nonatomic, readonly) VITextBlockAnnotation *textBlockAnnotation;

- (void).cxx_destruct;
- (id)barcodeAnnotation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)faceAnnotations;
- (id)humanAnnotations;
- (id)initWithAnnotations:(id)arg1 humanAnnotations:(id)arg2 nsfwAnnotations:(id)arg3 textBlockAnnotation:(id)arg4;
- (id)initWithFaceAnnotations:(id)arg1 humanAnnotations:(id)arg2 nsfwAnnotations:(id)arg3 textBlockAnnotation:(id)arg4 scenenetAnnotation:(id)arg5 barcodeAnnotation:(id)arg6;
- (id)initWithTextAnnotations:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nsfwAnnotations;
- (id)scenenetAnnotation;
- (id)textBlockAnnotation;

@end
