
@interface _UILabelMetrics : NSObject <NSCopying, NSSecureCoding> {
    _UILabelScaledMetrics * _associatedScaledMetrics;
    NSDictionary * _attributesToUse;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    _UILabelConfiguration * _configuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _drawingRect;
    double  _firstBaselineOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _idealBounds;
    double  _lastBaselineOffset;
    id  _layout;
    struct { 
        unsigned int calculated : 1; 
        unsigned int contentSynthesized : 1; 
        unsigned int textToUseIsAttributed : 1; 
        unsigned int forDrawing : 1; 
        unsigned int intrinsicMeasurement : 1; 
    }  _metricsFlags;
    long long  _numberOfLines;
    double  _scaleFactor;
    _UILabelScaledMetrics * _scaledMetrics;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    NSStringDrawingContext * _stringDrawingContext;
    _UILabelSynthesizedContent * _synthesizedContent;
    id  _textToUse;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _intrinsicBaselineSize;
@property (nonatomic, readonly) struct { double x1; double x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; long long x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; } _intrinsicSizeBaselineInfo;
@property (nonatomic, readonly) double _lastLineBaselineOffsetFromTop;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _sourceRect;
@property (nonatomic, readonly) NSStringDrawingContext *_stringDrawingContext;
@property (nonatomic, readonly) _UILabelSynthesizedContent *_synthesizedContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) _UILabelConfiguration *configuration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingBounds;
@property (nonatomic, readonly) double firstLineBaselineOffsetFromTop;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } intrinsicBounds;
@property (nonatomic, readonly) double lastLineBaselineOffsetFromBottom;
@property (nonatomic, readonly) long long numberOfLines;
@property (nonatomic, readonly) double scaleFactor;

+ (id)intrinsicMetricsWithConfiguration:(id)arg1;
+ (id)metricsWithConfiguration:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_calculateScaledMetricsUsingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_calculatedSynthesizedContentIfNeeded;
- (void)_ensureSynthesizedContent;
- (bool)_hyphenationPossiblyDisabledIfURLsDetected;
- (id)_initWithConfiguration:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 synthesizedContent:(id)arg3 associatedScaledMetrics:(id)arg4;
- (struct CGSize { double x1; double x2; })_intrinsicBaselineSize;
- (struct { double x1; double x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; long long x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; })_intrinsicSizeBaselineInfo;
- (double)_lastLineBaselineOffsetFromTop;
- (double)_lineSpacing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRect;
- (id)_stringDrawingContext;
- (id)_synthesizedAttributedText;
- (id)_synthesizedAttributes;
- (id)_synthesizedContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)draw;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (void)encodeWithCoder:(id)arg1;
- (double)firstLineBaselineOffsetFromTop;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })intrinsicBounds;
- (bool)isEqual:(id)arg1;
- (double)lastLineBaselineOffsetFromBottom;
- (long long)numberOfLines;
- (double)scaleFactor;

@end
