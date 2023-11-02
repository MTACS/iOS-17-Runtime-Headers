
@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage> {
    int  _blendMode;
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
    UIImage * _imageObj;
    NSString * _name;
    double  _opacity;
}

@property (nonatomic) int blendMode;
@property (nonatomic, readonly) <UINamedLayerContentProvider> *contentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fixedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *imageObj;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double opacity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)imageObj;
- (id)name;
- (double)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageObj:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(double)arg1;

@end