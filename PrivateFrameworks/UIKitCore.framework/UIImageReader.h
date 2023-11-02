
@interface UIImageReader : NSObject {
    UIImageReaderConfiguration * _configuration;
    NSDictionary * _imageOptions;
}

@property (nonatomic, readonly, copy) UIImageReaderConfiguration *configuration;

+ (id)defaultReader;
+ (id)readerWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (id)imageWithContentsOfFileURL:(id)arg1;
- (void)imageWithContentsOfFileURL:(id)arg1 completion:(id /* block */)arg2;
- (id)imageWithData:(id)arg1;
- (void)imageWithData:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end
