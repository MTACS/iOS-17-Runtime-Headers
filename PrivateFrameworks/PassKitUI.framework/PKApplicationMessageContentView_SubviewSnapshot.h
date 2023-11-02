
@interface PKApplicationMessageContentView_SubviewSnapshot : NSObject {
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
    }  _state;
    int  _type;
}

- (void).cxx_destruct;
- (id)init;

@end
