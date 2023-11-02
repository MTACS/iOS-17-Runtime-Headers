
@interface CKTextMetricsRequest : NSObject <NSCopying> {
    bool  _alreadyPadded;
    NSAttributedString * _attributedString;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _containerInset;
    long long  _lineBreakMode;
    double  _lineFragmentPadding;
    double  _maximumHeight;
    unsigned long long  _maximumNumberOfLines;
    double  _maximumWidth;
    double  _minimumViewHeight;
}

@property (readonly) struct CGSize { double x1; double x2; } adjustedMaximumSize;
@property (readonly) double adjustedMaximumWidth;
@property (getter=isAlreadyPadded, nonatomic) bool alreadyPadded;
@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } containerInset;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) double maximumHeight;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double minimumViewHeight;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })adjustedMaximumSize;
- (double)adjustedMaximumWidth;
- (id)attributedString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAttributedString:(id)arg1;
- (bool)isAlreadyPadded;
- (long long)lineBreakMode;
- (double)lineFragmentPadding;
- (double)maximumHeight;
- (unsigned long long)maximumNumberOfLines;
- (double)maximumWidth;
- (double)minimumViewHeight;
- (void)setAlreadyPadded:(bool)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumViewHeight:(double)arg1;

@end
