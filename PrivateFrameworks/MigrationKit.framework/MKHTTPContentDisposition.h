
@interface MKHTTPContentDisposition : NSObject {
    NSString * _filename;
    NSString * _folder;
    NSString * _originalFilename;
}

@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *folder;
@property (nonatomic, copy) NSString *originalFilename;

- (void).cxx_destruct;
- (id)filename;
- (id)folder;
- (id)initWithHeaderValue:(id)arg1;
- (id)originalFilename;
- (void)setFilename:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setOriginalFilename:(id)arg1;

@end
