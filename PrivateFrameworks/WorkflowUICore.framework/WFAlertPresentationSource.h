
@interface WFAlertPresentationSource : NSObject {
    UIBarButtonItem * _barButtonItem;
    bool  _canOverlapSourceViewRect;
    unsigned long long  _permittedArrowDirections;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic) bool canOverlapSourceViewRect;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, readonly) UIView *sourceView;

+ (id)sourceWithBarButtonItem:(id)arg1;
+ (id)sourceWithView:(id)arg1;
+ (id)sourceWithView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (id)barButtonItem;
- (bool)canOverlapSourceViewRect;
- (id)init;
- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 barButtonItem:(id)arg3;
- (unsigned long long)permittedArrowDirections;
- (void)setCanOverlapSourceViewRect:(bool)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;

@end
