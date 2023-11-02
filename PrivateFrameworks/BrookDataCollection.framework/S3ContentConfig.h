
@interface S3ContentConfig : NSObject {
    NSString * _bucket;
    NSString * _filename;
}

@property (nonatomic, retain) NSString *bucket;
@property (nonatomic, retain) NSString *filename;

- (void).cxx_destruct;
- (id)bucket;
- (id)filename;
- (id)initWithFilename:(id)arg1 bucket:(id)arg2;
- (void)setBucket:(id)arg1;
- (void)setFilename:(id)arg1;

@end
