
@interface CHTextTransformations : NSObject {
    NSArray * _contextResults;
    NSArray * _contextStrokes;
    NSMutableArray * _correctionAngles;
    struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> { 
        struct BoundingBox {} *__begin_; 
        struct BoundingBox {} *__end_; 
        struct __compressed_pair<CoreHandwriting::BoundingBox *, std::allocator<CoreHandwriting::BoundingBox>> { 
            struct BoundingBox {} *__value_; 
        } __end_cap_; 
    }  _originalBoundingBoxes;
    CHStrokeClassificationResult * _strokeClassificationResult;
    CHStrokeGroupingResult * _strokeGroupingResult;
    <CHStrokeProvider> * _strokeProvider;
    struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> { 
        struct BoundingBox {} *__begin_; 
        struct BoundingBox {} *__end_; 
        struct __compressed_pair<CoreHandwriting::BoundingBox *, std::allocator<CoreHandwriting::BoundingBox>> { 
            struct BoundingBox {} *__value_; 
        } __end_cap_; 
    }  _transformedBoundingBoxes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fontTransferForDrawing:(id)arg1 transcription:(id)arg2 strokeClassification:(long long)arg3 shouldCancel:(id /* block */)arg4;
- (id)initWithContextStrokes:(id)arg1 contextResults:(id)arg2 strokeGroupingResult:(id)arg3 strokeClassificationResult:(id)arg4 strokeProvider:(id)arg5;
- (struct CHTextTransformationResult { id x1; id x2; id x3; })italicizeWithProgress:(id)arg1 shouldCancel:(id /* block */)arg2;
- (struct CHTextTransformationResult { id x1; id x2; id x3; })straightenWithProgress:(id)arg1 shouldCancel:(id /* block */)arg2;
- (id /* block */)textStrokePointTransformationFromAffineTransformation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
