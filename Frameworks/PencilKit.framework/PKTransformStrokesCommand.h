
@interface PKTransformStrokesCommand : PKUndoCommand {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    NSArray * _strokeTransforms;
    NSArray * _strokes;
}

@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic, readonly) NSArray *strokeTransforms;
@property (nonatomic, readonly) NSArray *strokes;

+ (id)commandForTransforming:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)commandForTransforming:(id)arg1 drawing:(id)arg2 strokeTransforms:(id)arg3;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransforms:(id)arg4;
- (id)invertedInDrawing:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (id)strokeTransforms;
- (id)strokes;

@end
