
@interface PXDebugHierarchyMutableElement : NSObject <NSCopying, PXDebugHierarchyElement> {
    double  _alpha;
    struct CGColor { } * _backgroundColor;
    bool  _canHaveChildren;
    NSString * _contentsGravity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
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
    unsigned long long  _identifier;
    NSString * _name;
    unsigned long long  _parentIdentifier;
    struct CGImage { } * _previewImage;
    double  _zPosition;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic) bool canHaveChildren;
@property (nonatomic, retain) NSString *contentsGravity;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long parentIdentifier;
@property (nonatomic) struct CGImage { }*previewImage;
@property (nonatomic) double zPosition;

- (void).cxx_destruct;
- (double)alpha;
- (struct CGColor { }*)backgroundColor;
- (bool)canHaveChildren;
- (id)contentsGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)identifier;
- (id)init;
- (id)name;
- (unsigned long long)parentIdentifier;
- (void)prepareForReuse;
- (struct CGImage { }*)previewImage;
- (void)setAlpha:(double)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setCanHaveChildren:(bool)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(unsigned long long)arg1;
- (void)setPreviewImage:(struct CGImage { }*)arg1;
- (void)setZPosition:(double)arg1;
- (double)zPosition;

@end
