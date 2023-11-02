
@interface TabOverviewItemLayoutInfo : NSObject {
    double  _alpha;
    UIView * _attachedView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _attachedViewReferenceRect;
    double  _borrowedContentHeaderHeight;
    UIView * _borrowedContentView;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _closeLastLayoutLocation;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _closeStartLocation;
    double  _dimmingAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    double  _interactiveInsertionProgress;
    bool  _interactivelyInserted;
    TabOverviewInterpolatedValue * _interpolatedBoundsLogScale;
    TabOverviewInterpolatedValue * _interpolatedCornerRadius;
    TabOverviewInterpolatedValue * _interpolatedHeightTransitionPercent;
    TabOverviewInterpolatedLocation * _interpolatedLocation;
    TabOverviewInterpolatedValue * _interpolatedSnapshotAlpha;
    NSArray * _interpolatedValues;
    TabOverviewItemView * _itemView;
    double  _snapshotAlpha;
    bool  _snapshotBlank;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotFrame;
    TabOverview * _tabOverview;
    TabOverviewItem * _tabOverviewItem;
    bool  _visibleInTabOverview;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
