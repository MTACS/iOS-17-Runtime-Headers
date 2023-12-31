
@interface SSScreenSnapshot : NSObject {
    UIImage * _image;
    UIScreen * _screen;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIScreen *screen;

+ (id)snapshotWithImage:(id)arg1 fromScreen:(id)arg2;

- (void).cxx_destruct;
- (id)image;
- (id)screen;

@end
