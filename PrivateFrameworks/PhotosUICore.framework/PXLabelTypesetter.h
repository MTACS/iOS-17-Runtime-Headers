
@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter> {
    bool  _adjustsFontSizeToFitWidth;
    bool  _allowTruncation;
    NSAttributedString * _attributedString;
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
    struct CGContext { } * _context;
    NSArray * _lines;
    unsigned long long  _maximumNumberOfLines;
    double  _minimumScaleFactor;
    double  _minimumTruncatedScaleFactor;
    long long  _typesettingMode;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowTruncation;
@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGContext { }*context;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) double minimumTruncatedScaleFactor;
@property (nonatomic) long long typesettingMode;

- (void).cxx_destruct;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2;
- (bool)_allowTextOverlapForFont:(id)arg1;
- (void)_setLines:(id)arg1;
- (void)_updateLines;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowTruncation;
- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGContext { }*)context;
- (void)didPerformChanges;
- (id)init;
- (id)initWithContext:(struct CGContext { }*)arg1;
- (id)lines;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumScaleFactor;
- (double)minimumTruncatedScaleFactor;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowTruncation:(bool)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTruncatedScaleFactor:(double)arg1;
- (void)setTypesettingMode:(long long)arg1;
- (void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(id)arg2;
- (long long)typesettingMode;

@end