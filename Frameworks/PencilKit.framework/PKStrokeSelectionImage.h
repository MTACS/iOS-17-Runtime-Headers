
@interface PKStrokeSelectionImage : NSObject <NSCopying> {
    UIImage * _addImage;
    PKStrokeSelectionImageConfig * _config;
    PKStrokeSelectionImageConfig * _fullSizeConfig;
    UIImage * _image;
    UIImage * _mulImage;
}

@property (nonatomic, retain) UIImage *addImage;
@property (nonatomic, readonly) UIImage *combinedImage;
@property (nonatomic, readonly) PKStrokeSelectionImageConfig *config;
@property (nonatomic, readonly) PKStrokeSelectionImageConfig *fullSizeConfig;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, retain) UIImage *mulImage;

- (void).cxx_destruct;
- (id)addImage;
- (id)combinedImage;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fullSizeConfig;
- (id)image;
- (id)initWithImage:(id)arg1 config:(id)arg2 fullSizeConfig:(id)arg3;
- (id)mulImage;
- (void)setAddImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMulImage:(id)arg1;

@end
