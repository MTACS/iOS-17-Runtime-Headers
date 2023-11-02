
@interface NSCollectionLayoutSize : NSObject <NSCopying> {
    NSCollectionLayoutDimension * _heightDimension;
    long long  _heightSemantic;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSCollectionLayoutDimension * _widthDimension;
    long long  _widthSemantic;
}

@property (nonatomic, retain) NSCollectionLayoutDimension *heightDimension;
@property (nonatomic) long long heightSemantic;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSCollectionLayoutDimension *widthDimension;
@property (nonatomic) long long widthSemantic;

// Image: /System/Library/PrivateFrameworks/CollectionViewCore.framework/CollectionViewCore

+ (id)sizeWithAbsoluteSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)sizeWithContainerSize;
+ (id)sizeWithContainerWidthFactor:(double)arg1 containerHeightFactor:(double)arg2;
+ (id)sizeWithSize:(struct CGSize { double x1; double x2; })arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3;
+ (id)sizeWithWidth:(double)arg1 widthSemantic:(long long)arg2 height:(double)arg3 heightSemantic:(long long)arg4;
+ (id)sizeWithWidthDimension:(id)arg1 heightDimension:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_axesUniformAcrossSiblings;
- (unsigned long long)_containerSizeDependentAxes;
- (struct CGSize { double x1; double x2; })_effectiveSizeForContainer:(id)arg1 displayScale:(double)arg2 ignoringInsets:(bool)arg3;
- (bool)_isEstimatedForAxis:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)heightDimension;
- (long long)heightSemantic;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 width:(id)arg4 height:(id)arg5;
- (bool)isContainerSize;
- (bool)isEqual:(id)arg1;
- (bool)isEstimated;
- (void)setHeightDimension:(id)arg1;
- (void)setHeightSemantic:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWidthDimension:(id)arg1;
- (void)setWidthSemantic:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)widthDimension;
- (long long)widthSemantic;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_layoutSizeWithFractionalWidth:(double)arg1 fractionalHeight:(double)arg2;
+ (id)_mapsui_layoutSizeWithFractionalWidth:(double)arg1 fractionalHeightUsingWidth:(double)arg2;
+ (id)_mapsui_layoutSizeWithFractionalWidth:(double)arg1 height:(double)arg2;

@end
