
@interface AVTMinimumContentSizeCollectionViewLayout : UICollectionViewFlowLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumContentSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } minimumContentSize;

- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })minimumContentSize;
- (void)setMinimumContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
