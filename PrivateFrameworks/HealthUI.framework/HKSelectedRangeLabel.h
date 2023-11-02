
@interface HKSelectedRangeLabel : UILabel {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

+ (id)_addChevron:(id)arg1 font:(id)arg2;
+ (id)_attributedMultiplePrefixStringForSelectedRangeData:(id)arg1 attributedString:(id)arg2 font:(id)arg3 foregroundColor:(id)arg4;
+ (id)_attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefixColor:(id)arg4 prefersImageAffixes:(bool)arg5 embedded:(bool)arg6;
+ (id)_stringForSelectedRangeData:(id)arg1 embedded:(bool)arg2;
+ (id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefixColor:(id)arg4 prefersImageAffixes:(bool)arg5;
+ (void)clearCaches;
+ (id)standardPrefixColorForSelectedRangeData:(id)arg1 defaultColor:(id)arg2;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedRangeData:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
