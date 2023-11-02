
@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource {
    NSString * _fileType;
}

@property (nonatomic, copy) NSString *fileType;

+ (id)imageSourceForFileType:(id)arg1;
+ (id)videoSourceForFileType:(id)arg1;

- (void).cxx_destruct;
- (id)fileType;
- (id)fileURL;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (id)initWithFileType:(id)arg1 mediaType:(long long)arg2;
- (unsigned long long)length;
- (void)setFileType:(id)arg1;

@end
