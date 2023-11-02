
@interface _VNCoreMLOperationPoints : VNOperationPoints {
    NSArray * _classLabels;
    NSArray * _precisionRecallCurves;
}

- (void).cxx_destruct;
- (bool)getClassificationMetrics:(id*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithClassLabels:(id)arg1 precisionRecallCurves:(id)arg2;

@end
