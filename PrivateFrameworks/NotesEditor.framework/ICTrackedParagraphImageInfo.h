
@interface ICTrackedParagraphImageInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    bool  _estimated;
    UIImage * _image;
    UIImageView * _imageViewIfExists;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    ICTrackedParagraph * _trackedParagraph;
    NSString * _uuid;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic) bool estimated;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageViewIfExists;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, retain) ICTrackedParagraph *trackedParagraph;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (bool)estimated;
- (id)image;
- (id)imageViewIfExists;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEstimated:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageViewIfExists:(id)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackedParagraph:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)trackedParagraph;
- (id)uuid;

@end
