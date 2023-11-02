
@protocol MKCollectionsSizeProvider <NSObject>

@required

- (double)minimumInterItemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (struct CGSize { double x1; double x2; })sizeForCollectionWithMaxCollectionsWidth:(double)arg1;

@end
