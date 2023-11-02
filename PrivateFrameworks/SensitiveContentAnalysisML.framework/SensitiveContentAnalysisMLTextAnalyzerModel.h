
@interface SensitiveContentAnalysisMLTextAnalyzerModel : NSObject {
    NSString * _className;
    NLModel * _model;
    double  _threshold;
}

- (void).cxx_destruct;
- (id)description;
- (bool)detectSensitivityForString:(id)arg1;
- (id)initWithModel:(id)arg1 className:(id)arg2 threshold:(double)arg3;

@end
