
@interface AMDJSONLoader : NSObject {
    NSString * _path;
}

@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (id)loadDataFromFileForClass:(Class)arg1;
- (id)path;
- (void)setPath:(id)arg1;

@end
