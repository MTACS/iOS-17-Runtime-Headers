
@interface SXColumnLayout : NSObject <NSCopying> {
    double  _columnWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _constrainedViewportSize;
    double  _contentScaleFactor;
    <SXDocumentLayout> * _documentLayout;
    long long  _gutter;
    unsigned long long  _layoutColumns;
    long long  _layoutWidth;
    long long  _leftColumnOffset;
    double  _leftInset;
    double  _leftMargin;
    double  _leftScreenMargin;
    double  _minimumHeight;
    double  _minimumViewportWidthForLooseLayout;
    unsigned long long  _numberOfColumns;
    long long  _rightColumnOffset;
    double  _rightInset;
    double  _rightMargin;
    double  _rightScreenMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } constrainedViewportSize;
@property (nonatomic, readonly) double contentScaleFactor;
@property (nonatomic, readonly) <SXDocumentLayout> *documentLayout;
@property (nonatomic, readonly) long long gutter;
@property (nonatomic, readonly) unsigned long long layoutColumns;
@property (nonatomic, readonly) long long layoutWidth;
@property (nonatomic, readonly) long long leftColumnOffset;
@property (nonatomic) double leftInset;
@property (nonatomic, readonly) double leftMargin;
@property (nonatomic, readonly) double leftScreenMargin;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumViewportWidthForLooseLayout;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic) long long rightColumnOffset;
@property (nonatomic) double rightInset;
@property (nonatomic, readonly) double rightMargin;
@property (nonatomic, readonly) double rightScreenMargin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id)columnLayoutForComponentBlueprint:(id)arg1 unitConverter:(id)arg2;
- (double)columnWidth;
- (struct CGSize { double x1; double x2; })constrainedViewportSize;
- (double)contentScaleFactor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 minimumColumnLength:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentLayout;
- (long long)gutter;
- (id)initWithConstrainedViewportSize:(struct CGSize { double x1; double x2; })arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2 layoutWidth:(double)arg3 documentLayout:(id)arg4 numberOfLayoutColumns:(unsigned long long)arg5 leftMargin:(double)arg6 rightMargin:(double)arg7 numberOfColumns:(unsigned long long)arg8 columnWidth:(double)arg9 leftScreenMargin:(double)arg10 rightScreenMargin:(double)arg11 contentScaleFactor:(double)arg12;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutColumns;
- (long long)layoutWidth;
- (long long)leftColumnOffset;
- (double)leftInset;
- (double)leftMargin;
- (double)leftScreenMargin;
- (double)minimumHeight;
- (double)minimumViewportWidthForLooseLayout;
- (unsigned long long)numberOfColumns;
- (long long)rightColumnOffset;
- (double)rightInset;
- (double)rightMargin;
- (double)rightScreenMargin;
- (void)setLeftInset:(double)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setMinimumViewportWidthForLooseLayout:(double)arg1;
- (void)setRightColumnOffset:(long long)arg1;
- (void)setRightInset:(double)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;
- (double)widthForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3 ignoreViewportPadding:(unsigned long long)arg4;
- (double)xPositionForColumnIndex:(long long)arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3 ignoreViewportPadding:(unsigned long long)arg4;

@end
