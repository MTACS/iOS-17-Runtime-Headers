
@interface PFParallaxAssetResource : NSObject {
    NSData * _adjustmentData;
    NSString * _adjustmentFormat;
    NSString * _adjustmentVersion;
    NSURL * _archiveURL;
    NSString * _fileType;
    NSURL * _imageFileURL;
    unsigned int  _orientation;
    struct CGImage { } * _proxyImage;
    long long  _type;
    NSURL * _videoFileURL;
}

@property (nonatomic, copy) NSData *adjustmentData;
@property (nonatomic, copy) NSString *adjustmentFormat;
@property (nonatomic, copy) NSString *adjustmentVersion;
@property (nonatomic, readonly) NSURL *archiveURL;
@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, copy) NSURL *imageFileURL;
@property (nonatomic) unsigned int orientation;
@property (nonatomic, retain) struct CGImage { }*proxyImage;
@property (getter=isProxyOnly, nonatomic, readonly) bool proxyOnly;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *videoFileURL;

+ (struct CGImage { }*)newImageWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)saveImage:(struct CGImage { }*)arg1 toURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)adjustmentData;
- (id)adjustmentFormat;
- (id)adjustmentVersion;
- (id)archiveURL;
- (id)contentsDictionary;
- (void)dealloc;
- (id)fileType;
- (id)imageFileURL;
- (id)init;
- (bool)isProxyOnly;
- (bool)loadContentsFromDictionary:(id)arg1 proxyPath:(id*)arg2 imagePath:(id*)arg3 adjustmentPath:(id*)arg4 error:(id*)arg5;
- (bool)loadFromArchiveURL:(id)arg1 error:(id*)arg2;
- (unsigned int)orientation;
- (struct CGImage { }*)proxyImage;
- (bool)saveToArchiveURL:(id)arg1 error:(id*)arg2;
- (void)setAdjustmentData:(id)arg1;
- (void)setAdjustmentFormat:(id)arg1;
- (void)setAdjustmentVersion:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setImageFileURL:(id)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setProxyImage:(struct CGImage { }*)arg1;
- (void)setType:(long long)arg1;
- (void)setVideoFileURL:(id)arg1;
- (long long)type;
- (id)videoFileURL;

@end
