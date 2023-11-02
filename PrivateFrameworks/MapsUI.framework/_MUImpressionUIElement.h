
@interface _MUImpressionUIElement : NSObject {
    MUImpressionElement * _clientElement;
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
    NSDate * _startDate;
    long long  _state;
}

@property (nonatomic, retain) MUImpressionElement *clientElement;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)clientElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setClientElement:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartDate:(id)arg1;
- (void)setState:(long long)arg1;
- (id)startDate;
- (long long)state;

@end
