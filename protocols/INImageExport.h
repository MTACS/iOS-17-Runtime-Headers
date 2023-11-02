
@protocol INImageExport <NSObject, JSExport>

@required

+ (id)imageNamed:(NSString *)arg1;
+ (id)imageWithImageData:(NSData *)arg1;
+ (id)imageWithURL:(NSURL *)arg1;

- (NSString *)_bundlePath;
- (NSString *)_identifier;
- (NSData *)_imageData;
- (NSString *)_name;
- (void)_setBundlePath:(NSString *)arg1;
- (void)_setImageData:(NSData *)arg1;
- (void)_setName:(NSString *)arg1;
- (void)_setUri:(NSURL *)arg1;
- (NSURL *)_uri;
- (id)init;

@end
