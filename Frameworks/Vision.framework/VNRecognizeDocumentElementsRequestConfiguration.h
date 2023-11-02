
@interface VNRecognizeDocumentElementsRequestConfiguration : VNImageBasedRequestConfiguration {
    VNRecognizeDocumentElementsRequestElementConfiguration * _documentElements;
    unsigned long long  _imageCropAndScaleOption;
    VNRecognizeDocumentElementsRequestElementConfiguration * _machineReadableCodeElements;
    VNRecognizeDocumentElementsRequestElementConfiguration * _textElements;
}

@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements;
@property unsigned long long imageCropAndScaleOption;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentElements;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithRequestClass:(Class)arg1;
- (id)machineReadableCodeElements;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (id)textElements;

@end
