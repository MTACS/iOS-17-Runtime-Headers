
@interface AXMAXElementVisionEngine : AXMVisionEngine {
    AXMAXElementDetectorNode * _axElementDetector;
    AXMBrailleEdgesDetectorNode * _brailleEdgeDetector;
    AXMScreenCaptureNode * _captureNode;
    AXMIconClassDetectorNode * _iconClassDetector;
    AXMImageNode * _imageNode;
    AXMTextDetectorNode * _textDetector;
}

@property (nonatomic) AXMAXElementDetectorNode *axElementDetector;
@property (nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector;
@property (nonatomic) AXMScreenCaptureNode *captureNode;
@property (nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (nonatomic) AXMImageNode *imageNode;
@property (nonatomic) AXMTextDetectorNode *textDetector;

- (void).cxx_destruct;
- (id)axElementDetector;
- (id)brailleEdgeDetector;
- (id)captureNode;
- (id)iconClassDetector;
- (id)imageNode;
- (id)initWithIdentifier:(id)arg1;
- (void)setAxElementDetector:(id)arg1;
- (void)setBrailleEdgeDetector:(id)arg1;
- (void)setCaptureNode:(id)arg1;
- (void)setIconClassDetector:(id)arg1;
- (void)setImageNode:(id)arg1;
- (void)setTextDetector:(id)arg1;
- (id)textDetector;

@end
