
@interface VNDocumentObservation : VNDetectedObjectObservation <VNDataDetectorSupporting> {
    NSArray * _blocks;
    CRDocumentOutputRegion * _topLevelRegion;
}

@property (getter=getBlocks, nonatomic, readonly) NSArray *blocks;
@property (getter=getTitle, nonatomic, readonly) VNRecognizedTextBlockObservation *title;
@property (getter=getTranscript, nonatomic, readonly) NSString *transcript;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_textBlockObservationsFromRegion:(id)arg1 requestRevision:(unsigned long long)arg2;
- (id)blocksWithTypes:(unsigned long long)arg1 inRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)boundingBoxForTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)closestTextBlockOfTypes:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 maximumPixelDistance:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)getBlocks;
- (id)getCRDocumentOutputRegion;
- (id)getDataDetectorResults:(id*)arg1;
- (id)getTitle;
- (id)getTranscript;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLevelRegion:(id)arg1 requestRevision:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlock:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlockObservation:(id)arg1;
- (bool)shouldReprocessDocument;
- (id)textBlockOfTypes:(unsigned long long)arg1 containingTextAtIndex:(long long)arg2;
- (id)textBlockWithCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)vn_cloneObject;

@end
