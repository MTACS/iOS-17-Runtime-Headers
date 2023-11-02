
@interface VNRecognizedTextBlockObservation : VNRecognizedTextObservation <VNDataDetectorSupporting> {
    CROutputRegion * _crOutputRegion;
}

@property (getter=getChildren, nonatomic, readonly) NSArray *children;
@property (getter=getLines, nonatomic, readonly) NSArray *lines;
@property (getter=getRecognizedLanguages, nonatomic, readonly) NSArray *recognizedLanguages;
@property (nonatomic, readonly) bool shouldBeWrappedWithNextLine;
@property (getter=getTranscript, nonatomic, readonly) NSString *transcript;
@property (nonatomic, readonly) VNRecognizedTextBlock *vk_textBlock;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (void).cxx_destruct;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)debugDescription;
- (id)getCROutputRegion;
- (id)getChildren;
- (id)getDataDetectorResults:(id*)arg1;
- (id)getLines;
- (id)getRecognizedLanguages;
- (id)getTranscript;
- (id)initWithRequestRevision:(unsigned long long)arg1 crOutputRegion:(id)arg2;
- (bool)shouldBeWrappedWithNextLine;
- (id)topCandidates:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_textBlock;

@end
