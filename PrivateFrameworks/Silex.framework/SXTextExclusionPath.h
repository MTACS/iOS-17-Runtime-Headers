
@interface SXTextExclusionPath : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _actualPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    id /* block */  _completionBlock;
    NSString * _componentIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exclusionRect;
    bool  _fullBleed;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    int  _lineVerticalAlignment;
    id /* block */  _minYBlock;
    double  _padding;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    id /* block */  _startBlock;
    int  _type;
    double  _verticalAlignmentFactor;
    SXTextExclusionPathWrapper * _wrapper;
}

- (void).cxx_destruct;
- (id)description;

@end
