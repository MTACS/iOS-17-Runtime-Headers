
@interface EDAMRelatedContentImage : FATObject {
    NSNumber * _fileSize;
    NSNumber * _height;
    NSNumber * _pixelRatio;
    NSString * _url;
    NSNumber * _width;
}

@property (nonatomic, retain) NSNumber *fileSize;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, retain) NSNumber *pixelRatio;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSNumber *width;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)fileSize;
- (id)height;
- (id)pixelRatio;
- (void)setFileSize:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setPixelRatio:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)url;
- (id)width;

@end
