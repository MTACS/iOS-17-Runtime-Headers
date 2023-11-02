
@interface EKStructuredLocationWithImage : NSObject {
    UIImage * _image;
    EKStructuredLocation * _location;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) EKStructuredLocation *location;

- (void).cxx_destruct;
- (id)image;
- (id)location;
- (void)setImage:(id)arg1;
- (void)setLocation:(id)arg1;

@end
