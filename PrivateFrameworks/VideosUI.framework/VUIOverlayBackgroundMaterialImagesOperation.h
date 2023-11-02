
@interface VUIOverlayBackgroundMaterialImagesOperation : NSOperation {
    NSDictionary * _overlayMaterialImageByIdentifier;
    NSArray * _overlayMaterialRequests;
    struct CGSize { 
        double width; 
        double height; 
    }  _resizedBackgroundImageSize;
    UIImage * _resizedSourceBackgroundImage;
    UIImage * _sourceBackgroundImage;
}

@property (nonatomic, copy) NSDictionary *overlayMaterialImageByIdentifier;
@property (nonatomic, copy) NSArray *overlayMaterialRequests;
@property (nonatomic) struct CGSize { double x1; double x2; } resizedBackgroundImageSize;
@property (nonatomic, retain) UIImage *resizedSourceBackgroundImage;
@property (nonatomic, retain) UIImage *sourceBackgroundImage;

- (void).cxx_destruct;
- (id)_blurredMaterialImageWithSourceBackgroundImage:(id)arg1 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)init;
- (id)initWithSourceBackgroundImage:(id)arg1;
- (void)main;
- (id)overlayMaterialImageByIdentifier;
- (id)overlayMaterialRequests;
- (struct CGSize { double x1; double x2; })resizedBackgroundImageSize;
- (id)resizedSourceBackgroundImage;
- (void)setOverlayMaterialImageByIdentifier:(id)arg1;
- (void)setOverlayMaterialRequests:(id)arg1;
- (void)setResizedBackgroundImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setResizedSourceBackgroundImage:(id)arg1;
- (void)setSourceBackgroundImage:(id)arg1;
- (id)sourceBackgroundImage;

@end
