
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrameIncludingAuxiliaries;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentFrameOffset;
    unsigned long long  _layoutAxis;
    bool  _layoutRTL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryContentFrame;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _sectionInsets;
}

- (id)description;

@end
