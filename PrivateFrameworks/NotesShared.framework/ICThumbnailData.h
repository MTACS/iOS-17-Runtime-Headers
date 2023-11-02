
@interface ICThumbnailData : NSObject {
    UIImage * _image;
    unsigned long long  _imageScaling;
    bool  _isMovie;
    bool  _showAsFileIcon;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) bool isMovie;
@property (nonatomic) bool showAsFileIcon;

- (void).cxx_destruct;
- (id)image;
- (unsigned long long)imageScaling;
- (id)initWithImage:(id)arg1 imageScaling:(unsigned long long)arg2 showAsFileIcon:(bool)arg3 isMovie:(bool)arg4;
- (bool)isMovie;
- (void)setImage:(id)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setIsMovie:(bool)arg1;
- (void)setShowAsFileIcon:(bool)arg1;
- (bool)showAsFileIcon;

@end
