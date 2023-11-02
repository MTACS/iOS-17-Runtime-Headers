
@interface _UIVectorTextLayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _coordinateAdjustment;
    double  _firstLineBaseline;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _fitRange;
    double  _lastLineBaseline;
    _UIVectorTextLayoutInfo * _layoutInfo;
    unsigned long long  _numberOfLines;
    NSArray * _runs;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _usedBoundingRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } coordinateAdjustment;
@property (nonatomic, readonly) double firstLineBaseline;
@property (nonatomic, readonly) double lastLineBaseline;
@property (nonatomic, readonly) unsigned long long numberOfLines;
@property (nonatomic, readonly) unsigned long long numberOfRuns;
@property (nonatomic, readonly, copy) _UIVectorTextLayoutParameters *parameters;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } usedBoundingRect;

- (void).cxx_destruct;
- (void)_layoutIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })coordinateAdjustment;
- (id)description;
- (void)enumerateRunsUsingBlock:(id /* block */)arg1;
- (double)firstLineBaseline;
- (bool)hasLayout;
- (id)initWithTextParameters:(id)arg1;
- (double)lastLineBaseline;
- (id)layoutDescription;
- (unsigned long long)numberOfLines;
- (unsigned long long)numberOfRuns;
- (id)parameters;
- (void)resetLayout;
- (struct CGSize { double x1; double x2; })size;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedBoundingRect;

@end
