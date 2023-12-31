
@interface CHVisualization : NSObject {
    <CHVisualizationDelegate> * _delegate;
    CHRecognitionSession * _recognitionSession;
}

@property (nonatomic) <CHVisualizationDelegate> *delegate;
@property (nonatomic, readonly) long long layeringPriority;
@property (nonatomic, readonly) CHRecognitionSession *recognitionSession;
@property (nonatomic, readonly) bool wantsInputDrawings;

- (void).cxx_destruct;
- (id)delegate;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithRecognitionSession:(id)arg1;
- (long long)layeringPriority;
- (id)recognitionSession;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)setDelegate:(id)arg1;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)wantsInputDrawings;

@end
