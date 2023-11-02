
@interface _UICollectionLayoutExtendedAttributesQueryInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _queryRect;
    long long  _sectionIndex;
}

- (id)description;

@end
