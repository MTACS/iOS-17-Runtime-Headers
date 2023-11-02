
@interface _UICollectionLayoutSectionDescriptor : NSObject {
    unsigned long long  _axis;
    bool  _clipsContentToBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerLayoutFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    double  _cornerRadius;
    bool  _excludesBoundarySupplementariesFromClipping;
    double  _groupDimension;
    double  _interPageDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _orthogonalScrollViewLayoutFrame;
    long long  _orthogonalScrollingBehavior;
    long long  _orthogonalScrollingBounce;
    double  _orthogonalScrollingDecelerationRate;
    double  _pagingDimension;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _scrollingUnitVector;
}

@end
