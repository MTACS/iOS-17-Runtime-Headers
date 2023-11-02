
@interface AXMIconVisionEngine : AXMVisionEngine {
    AXMBrailleEdgesDetectorNode * _brailleEdgeDetector;
    AXMIconClassDetectorNode * _iconClassDetector;
    AXMImageNode * _imageNode;
}

@property (nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector;
@property (nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (nonatomic) AXMImageNode *imageNode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)brailleEdgeDetector;
- (id)classifyImages:(id)arg1 withTimeout:(double)arg2;
- (id)iconClassDetector;
- (id)imageNode;
- (id)initWithIdentifier:(id)arg1;
- (void)setBrailleEdgeDetector:(id)arg1;
- (void)setIconClassDetector:(id)arg1;
- (void)setImageNode:(id)arg1;

@end
