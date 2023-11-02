
@interface QLThumbnailRepresentation : NSObject {
    struct CGImage { } * _CGImageThumbnail;
    NSImage * _NSImage;
    UIImage * _UIImageThumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    int  _flavor;
    QLThumbnailMetadata * _generatedProperties;
    double  _scale;
    long long  _type;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic) struct CGImage { }*CGImageThumbnail;
@property (nonatomic, readonly) NSImage *NSImage;
@property (nonatomic, readonly) UIImage *UIImage;
@property (nonatomic, retain) UIImage *UIImageThumbnail;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property int flavor;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property (nonatomic) double scale;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)CGImageThumbnail;
- (id)NSImage;
- (id)UIImage;
- (id)UIImageThumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (id)description;
- (int)flavor;
- (id)generatedProperties;
- (id)initWithThumbnailType:(long long)arg1 iconFlavor:(int)arg2 CGImage:(struct CGImage { }*)arg3 scale:(double)arg4 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 generatedProperties:(id)arg6;
- (double)scale;
- (void)setCGImageThumbnail:(struct CGImage { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlavor:(int)arg1;
- (void)setGeneratedProperties:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUIImageThumbnail:(id)arg1;
- (long long)type;

@end
