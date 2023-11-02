
@protocol _UIScrollViewScrollIndicator <NSObject>

@required

- (bool)expandedForDirectManipulation;
- (bool)hasPointer;
- (struct CGSize { double x1; double x2; })layoutOffset;
- (void)setExpandedForDirectManipulation:(bool)arg1;
- (void)setHasPointer:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (long long)style;
- (unsigned long long)type;

@end
