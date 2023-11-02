
@interface _UICollectionPreferredSize : NSObject {
    id  _additionalData;
    struct CGSize { 
        double width; 
        double height; 
    }  _fittingSize;
    NSCollectionLayoutSize * _layoutSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    bool  _preferredSizeDirty;
}

- (void).cxx_destruct;
- (id)description;

@end
