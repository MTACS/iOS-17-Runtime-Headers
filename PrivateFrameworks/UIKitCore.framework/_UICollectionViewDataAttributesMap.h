
@interface _UICollectionViewDataAttributesMap : NSObject {
    NSMutableArray * _clonedCellAttributes;
    NSMutableArray * _clonedDecorationAttributes;
    NSMutableArray * _clonedSupplementaryAttributes;
    UICollectionViewData * _collectionViewData;
    _UICollectionViewRTree * _rTree;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _validLayoutRect;
}

- (void).cxx_destruct;

@end
