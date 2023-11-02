
@protocol TSKPencilAnnotationStorage <NSObject, TSPCopying>

@required

- (long long)attachedLocation;
- (long long)attachedType;
- (long long)compoundAnnotationType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertStrokeRectToUnscaledCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertStrokeToUnscaledCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })convertStrokeToUnscaledCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertUnscaledCanvasToStrokePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertUnscaledCanvasToStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertUnscaledCanvasToStrokeSize:(struct CGSize { double x1; double x2; })arg1;
- (NSDate *)creationDate;
- (TSKPKDrawing *)drawing;
- (PKDrawing *)drawingForTextRecognition;
- (NSData *)encodedDrawing;
- (bool)isCalloutLine;
- (bool)isCalloutMarginAnnotation;
- (bool)isCalloutParentStorage;
- (NSData *)legacyEncodedDrawing;
- (struct CGPoint { double x1; double x2; })markupOffset;
- (bool)needsTextRecognition;
- (struct CGSize { double x1; double x2; })originalAttachedSize;
- (<TSKPencilAnnotationStorage> *)parentStorage;
- (struct CGPath { }*)path;
- (TSUColor *)penColor;
- (double)percentOfPAContainedInParentRep;
- (TSUImage *)rasterizedImage;
- (TSPData *)rasterizedImageTSPData;
- (void)setCompoundAnnotationType:(long long)arg1;
- (bool)shouldInvertStretchAxis;
- (bool)shouldResizeInOneDirection;
- (bool)shouldResizeWithAnchor;
- (bool)shouldShowAnchorRect;
- (bool)shouldSplitAcrossAnchorRects;
- (bool)shouldUseHeadTail;
- (NSArray *)subStorages;
- (unsigned long long)textBaselinesTouchedCount;
- (long long)toolType;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromStrokeToUnscaledCanvas;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromUnscaledCanvasToStroke;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledBoundsOfStrokes;
- (TSUBezierPath *)unscaledPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledRenderedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledStrokePointsFrame;
- (unsigned long long)visibleStrokesCount;

@end
