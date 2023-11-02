
@interface PSGLMWrapper : NSObject {
    void * _langModel;
    void * _lexicon;
}

@property (nonatomic, readonly) void*langModel;
@property (nonatomic, readonly) void*lexicon;

- (void)dealloc;
- (id)initWithLangModel:(void*)arg1 lexicon:(void*)arg2;
- (void*)langModel;
- (void*)lexicon;

@end
