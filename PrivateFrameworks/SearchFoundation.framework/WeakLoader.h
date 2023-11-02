
@interface WeakLoader : NSObject {
    <SFResourceLoader> * _weakLoader;
}

@property (nonatomic, readonly) <SFResourceLoader> *strongloader;

- (void).cxx_destruct;
- (id)initWithLoader:(id)arg1;
- (id)strongloader;

@end
