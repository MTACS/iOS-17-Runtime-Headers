
@interface WKBokehMotionFilter : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _displacement;
    double  _filterCoefficient;
    struct CGPoint { 
        double x; 
        double y; 
    }  _filteredPosition;
    WKBokehMotionManager * _motionManager;
}

- (void).cxx_destruct;
- (id)init;

@end
