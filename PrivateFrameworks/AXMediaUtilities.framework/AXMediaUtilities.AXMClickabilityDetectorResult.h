
@interface AXMediaUtilities.AXMClickabilityDetectorResult : NSObject {
    void box;
    void confidence;
    void label;
    void labelName;
}

- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resultBox;
- (double)resultConfidence;
- (long long)resultLabel;
- (id)resultLabelName;

@end
