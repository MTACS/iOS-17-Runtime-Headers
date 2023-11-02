
@interface PXCMMLayoutGenerator : PXLayoutGenerator

+ (id)_defaultEditorialLayoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 headerHeight:(double)arg2 interItemSpacing:(struct CGSize { double x1; double x2; })arg3;
+ (id)_defaultGridLayoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 additionalTileCount:(unsigned long long)arg2 headerHeight:(double)arg3 itemSize:(struct CGSize { double x1; double x2; })arg4 interItemSpacing:(struct CGSize { double x1; double x2; })arg5 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6;
+ (id)_gridLayoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 columnCount:(unsigned long long)arg2 additionalTileCount:(unsigned long long)arg3 headerHeight:(double)arg4 interItemSpacing:(struct CGSize { double x1; double x2; })arg5;
+ (id)layoutGeneratorForLayoutType:(long long)arg1 withReferenceSize:(struct CGSize { double x1; double x2; })arg2 additionalTileCount:(unsigned long long)arg3 headerHeight:(double)arg4 itemSize:(struct CGSize { double x1; double x2; })arg5 interItemSpacing:(struct CGSize { double x1; double x2; })arg6 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7;

@end
