
@interface SVImageLayer : CALayer {
    NSString * _identifier;
    UIImage * _image;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)identifier;
- (id)image;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;

@end
