
@interface CKMacToolBarImageProperties : NSObject {
    UIImage * _image;
    NSString * _imageName;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)image;
- (id)imageName;
- (void)setImage:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
