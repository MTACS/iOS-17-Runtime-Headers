
@interface _UILabelLegacyScaledMetrics : NSObject {
    double  _actualScaleFactor;
    double  _baselineOffset;
    long long  _measuredNumberOfLines;
    NSAttributedString * _scaledAttributedText;
    double  _scaledBaselineOffset;
    double  _scaledFirstBaselineOffset;
    double  _scaledLineHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _unscaledAndPossiblyTooLargeSize;
}

- (void).cxx_destruct;

@end
