
@interface DEExecutionContext : NSObject {
    struct shared_ptr<siri::dialogengine::Context> { 
        struct Context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _SharedThis;
    void * _This;
}

@property struct shared_ptr<siri::dialogengine::Context> { struct Context {} *x1; struct __shared_weak_count {} *x2; } SharedThis;
@property void*This;
@property (readonly) NSString *loadStatus;
@property (readonly) NSString *locale;

+ (id)globalParameters;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::Context> { struct Context {} *x1; struct __shared_weak_count {} *x2; })SharedThis;
- (void*)This;
- (void)addVariable:(id)arg1;
- (void)enableDebugLogging;
- (id)findVariable:(id)arg1;
- (id)getBuiltinSemanticConcepts;
- (id)getFile;
- (id)init;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::Context> { struct Context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isBuiltinType:(id)arg1;
- (bool)load:(id)arg1 locale:(id)arg2;
- (id)loadStatus;
- (id)locale;
- (bool)needsUpgrade:(id)arg1;
- (void)registerMorphunDataPathFor:(id)arg1 path:(id)arg2;
- (void)setFile:(id)arg1;
- (void)setSharedThis:(struct shared_ptr<siri::dialogengine::Context> { struct Context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTemplateDir:(id)arg1;
- (void)setThis:(void*)arg1;
- (id)upgrade:(id)arg1;

@end
