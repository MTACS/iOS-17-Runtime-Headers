
@interface PKPassTileView_SubviewSnapshot : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    UIView * _snapshot;
    struct { 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } margins; 
        double innerHorizontalMargin; 
        double innerVerticalMargin; 
        bool cornerSpinner; 
        bool secondaryImageVisible; 
    }  _state;
    long long  _type;
}

- (void).cxx_destruct;
- (id)init;

@end
