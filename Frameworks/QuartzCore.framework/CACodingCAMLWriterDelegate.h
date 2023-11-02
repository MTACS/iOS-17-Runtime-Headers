
@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {
    NSDictionary * _imageEncodeOptions;
    NSString * _imageFormat;
    NSString * _resourceDir;
    int  _serial;
    bool  _skipHiddenLayers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *imageEncodeOptions;
@property (copy) NSString *imageFormat;
@property bool skipHiddenLayers;
@property (readonly) Class superclass;

- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (bool)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (void)dealloc;
- (id)imageEncodeOptions;
- (id)imageFormat;
- (id)initWithResourceDir:(id)arg1;
- (void)setImageEncodeOptions:(id)arg1;
- (void)setImageFormat:(id)arg1;
- (void)setSkipHiddenLayers:(bool)arg1;
- (bool)skipHiddenLayers;

@end
