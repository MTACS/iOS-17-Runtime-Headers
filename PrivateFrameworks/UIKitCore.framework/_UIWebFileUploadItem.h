
@interface _UIWebFileUploadItem : NSObject {
    NSString * _filePath;
}

@property (nonatomic, retain) NSString *filePath;

- (void)dealloc;
- (id)displayImage;
- (id)filePath;
- (id)initWithFilePath:(id)arg1;
- (bool)isVideo;
- (void)setFilePath:(id)arg1;

@end
