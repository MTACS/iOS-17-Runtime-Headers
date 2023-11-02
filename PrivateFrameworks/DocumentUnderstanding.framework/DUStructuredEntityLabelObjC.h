
@interface DUStructuredEntityLabelObjC : NSObject {
    _TtC21DocumentUnderstanding27DUStructuredExtractionLabel * _underlying;
}

@property (nonatomic) double confidenceScore;
@property (nonatomic, copy) NSString *labelName;

- (void).cxx_destruct;
- (double)confidenceScore;
- (id)init;
- (id)labelName;
- (void)setConfidenceScore:(double)arg1;
- (void)setLabelName:(id)arg1;

@end
