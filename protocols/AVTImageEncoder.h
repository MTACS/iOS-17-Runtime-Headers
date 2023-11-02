
@protocol AVTImageEncoder <NSObject>

@required

- (NSData *)dataFromImage:(UIImage *)arg1;
- (NSString *)fileExtension;
- (UIImage *)imageFromData:(NSData *)arg1 error:(id*)arg2;
- (UIImage *)imageFromURL:(NSURL *)arg1 error:(id*)arg2;

@end
