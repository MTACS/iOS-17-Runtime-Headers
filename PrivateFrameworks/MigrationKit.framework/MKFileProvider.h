
@interface MKFileProvider : NSObject {
    NSString * _rootPath;
}

@property (nonatomic, copy) NSString *rootPath;

- (void).cxx_destruct;
- (id)fetchRootPath;
- (id)rootPath;
- (void)setRootPath:(id)arg1;

@end
