
@interface _UILabelScaledMetrics : NSObject {
    double  _actualScaleFactor;
    _UILabelScaledMetrics * _associatedScaledMetrics;
    double  _baselineOffset;
    _UILabelConfiguration * _configuration;
    long long  _measuredNumberOfLines;
    NSAttributedString * _scaledAttributedText;
    double  _scaledBaselineOffset;
    double  _scaledFirstBaselineOffset;
    double  _scaledLineHeight;
    struct { 
        unsigned int calculated : 1; 
    }  _scaledMetricsFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _totalBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _unscaledAndPossiblyTooLargeSize;
}

- (void).cxx_destruct;
- (void)_calculateIfNecessary;
- (void)_calculateIfNecessaryWithAssociatedMetrics;
- (void)_calculateIfNecessaryWithConfiguration;
- (id)description;

@end
