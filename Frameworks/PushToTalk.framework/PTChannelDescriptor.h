
@interface PTChannelDescriptor : NSObject {
    UIImage * _image;
    NSURL * _imageFileURL;
    NSString * _name;
}

@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) NSURL *imageFileURL;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)image;
- (id)imageFileURL;
- (id)initWithName:(id)arg1 image:(id)arg2;
- (id)name;

@end
