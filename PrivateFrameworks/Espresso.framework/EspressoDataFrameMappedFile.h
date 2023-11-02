
@interface EspressoDataFrameMappedFile : NSObject {
    char * _basePtr;
    NSString * _path;
    int  file_id;
    unsigned long long  length;
}

@property char *basePtr;
@property (retain) NSString *path;

- (void).cxx_destruct;
- (char *)basePtr;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setBasePtr:(char *)arg1;
- (void)setPath:(id)arg1;

@end
