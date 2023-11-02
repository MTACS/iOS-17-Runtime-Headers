
@interface S3Content : NSObject {
    NSString * _bucket;
    NSData * _content;
    NSString * _filename;
    bool  _gzip;
    NSData * _gzipContentCache;
}

@property (nonatomic, retain) NSString *bucket;
@property (nonatomic, retain) NSData *content;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic) bool gzip;
@property (nonatomic, readonly) NSData *gzipContent;
@property (nonatomic, readonly) NSString *mimeType;

- (void).cxx_destruct;
- (id)_gzipCompressData:(id)arg1;
- (id)bucket;
- (id)content;
- (id)filename;
- (bool)gzip;
- (id)gzipContent;
- (id)initWithContent:(id)arg1 filename:(id)arg2 bucket:(id)arg3 gzip:(bool)arg4;
- (id)mimeType;
- (void)setBucket:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setGzip:(bool)arg1;

@end
