
@interface PKHorizontalScrollingChildLayout : UICollectionViewLayout {
    double  _alphaTransition;
    NSMutableDictionary * _attributesPerIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    <PKHorizontalScrollingChildLayoutDataSource> * _dataSource;
    NSMutableDictionary * _footersPerIndexPath;
    NSMutableDictionary * _headersPerIndexPath;
    bool  _isLowEndDevice;
    double  _lastDrawnAlpha;
    bool  _visible;
}

@property (nonatomic) double alphaTransition;
@property (nonatomic) <PKHorizontalScrollingChildLayoutDataSource> *dataSource;
@property (nonatomic) bool isLowEndDevice;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_adjustItems:(id)arg1 withLateralMove:(double)arg2;
- (double)alphaTransition;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)dataSource;
- (id)init;
- (bool)isLowEndDevice;
- (bool)isVisible;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)setAlphaTransition:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsLowEndDevice:(bool)arg1;
- (void)setVisible:(bool)arg1;

@end
