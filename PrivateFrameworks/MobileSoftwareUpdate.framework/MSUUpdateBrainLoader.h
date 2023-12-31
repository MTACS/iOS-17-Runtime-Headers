
@interface MSUUpdateBrainLoader : NSObject {
    NSDictionary * _attributesDict;
}

@property (retain) NSDictionary *attributesDict;

- (void)adjustOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)attributesDict;
- (bool)cancel:(id*)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(id /* block */)arg2;
- (long long)requiredDiskSpace:(id*)arg1;
- (void)setAttributesDict:(id)arg1;

@end
