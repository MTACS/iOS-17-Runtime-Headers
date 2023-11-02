
@interface CKPopoverViewLayoutMetrics : NSObject {
    <UICoordinateSpace> * _coordinateSpace;
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
    unsigned long long  _state;
}

@property (nonatomic, retain) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)coordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithState:(unsigned long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 coordinateSpace:(id)arg3;
- (void)setCoordinateSpace:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
