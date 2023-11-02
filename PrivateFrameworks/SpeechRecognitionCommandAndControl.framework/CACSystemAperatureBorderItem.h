
@interface CACSystemAperatureBorderItem : NSObject <AXElementNamesItem> {
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
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } elementLabelContainerSize;
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) bool isSpacer;

+ (id)borderItemsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 minimumRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementFrame;
- (struct CGSize { double x1; double x2; })elementLabelContainerSize;
- (id)elementName;
- (bool)isSpacer;

@end
