
@interface DocumentUnderstanding.DUStructuredExtractionLabel : NSObject <NSCoding, NSCopying> {
    void confidenceScore;
    void labelName;
}

@property (nonatomic) double confidenceScore;
@property (nonatomic, copy) NSString *labelName;

- (void).cxx_destruct;
- (double)confidenceScore;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)labelName;
- (void)setConfidenceScore:(double)arg1;
- (void)setLabelName:(id)arg1;

@end
