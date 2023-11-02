
@interface TLKLabelItem : NSObject <TLKGridArrangementItem> {
    TLKRichText * _richText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  columnRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  frame;
    double  horizontalCompressionResistance;
    double  horizontalHuggingPriority;
    unsigned long long  row;
    NUISizeCache * sizeCache;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } columnRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalCompressionResistance;
@property (nonatomic) double horizontalHuggingPriority;
@property (nonatomic, retain) TLKRichText *richText;
@property (nonatomic) unsigned long long row;
@property (nonatomic, retain) NUISizeCache *sizeCache;
@property (readonly) Class superclass;

+ (id)font;
+ (void)initialize;
+ (double)minimumWidthForLabelItem;
+ (void)setFontValues;

- (void).cxx_destruct;
- (id)attributedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (id)description;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)horizontalCompressionResistance;
- (double)horizontalHuggingPriority;
- (id)init;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (id)richText;
- (unsigned long long)row;
- (void)setColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalCompressionResistance:(double)arg1;
- (void)setHorizontalHuggingPriority:(double)arg1;
- (void)setRichText:(id)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSizeCache:(id)arg1;
- (id)sizeCache;
- (struct CGSize { double x1; double x2; })sizeForTargetSize:(struct CGSize { double x1; double x2; })arg1;

@end
