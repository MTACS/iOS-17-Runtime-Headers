
@interface CIGVNode : GVNode {
    struct CGSize { 
        double width; 
        double height; 
    }  badgeSize;
    int  color;
    struct CGSize { 
        double width; 
        double height; 
    }  contentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  extent;
    NSMutableArray * images;
    struct CGSize { 
        double width; 
        double height; 
    }  imagesSize;
    struct __CFString { } * label;
    struct CGSize { 
        double width; 
        double height; 
    }  labelSize;
    NSMutableArray * rois;
    struct CGSize { 
        double width; 
        double height; 
    }  roisSize;
    int  shape;
    struct __CFString { } * title;
    struct CGSize { 
        double width; 
        double height; 
    }  titleSize;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } badgeFrame;
@property (nonatomic) int color;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentCornerSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentInsertSize;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extent;
@property (nonatomic, readonly) struct __CFArray { }*images;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imagesFrame;
@property (nonatomic) struct __CFString { }*label;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelFrame;
@property (nonatomic, readonly) struct __CFArray { }*rois;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } roisFrame;
@property (nonatomic) int shape;
@property (nonatomic) struct __CFString { }*title;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleFrame;

+ (struct __CFDictionary { }*)textAttributesForLabel;
+ (struct __CFDictionary { }*)textAttributesForTitle;

- (void)addImage:(struct CGImage { }*)arg1;
- (void)addRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })badgeFrame;
- (int)color;
- (struct CGSize { double x1; double x2; })contentCornerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGSize { double x1; double x2; })contentInsertSize;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (struct __CFArray { }*)images;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imagesFrame;
- (id)init;
- (id)initWithCINode:(void*)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct __CFString { }*)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (struct __CFArray { }*)rois;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roisFrame;
- (void)setColor:(int)arg1;
- (void)setLabel:(struct __CFString { }*)arg1;
- (void)setShape:(int)arg1;
- (void)setTitle:(struct __CFString { }*)arg1;
- (int)shape;
- (struct __CFString { }*)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;
- (void)updateBadgeSize;
- (void)updateContentSize;
- (void)updateSize;

@end
