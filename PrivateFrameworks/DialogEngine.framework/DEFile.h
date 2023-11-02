
@interface DEFile : NSObject {
    struct shared_ptr<siri::dialogengine::File> { 
        struct File {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::File> { struct File {} *x1; struct __shared_weak_count {} *x2; } This;
@property (retain) NSString *id;
@property (retain) NSString *localeFilename;
@property (retain) NSString *paramsFilename;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::File> { struct File {} *x1; struct __shared_weak_count {} *x2; })This;
- (void)addPhrase:(id)arg1;
- (id)execute:(id)arg1;
- (id)getDialogs;
- (id)getFormatVersion;
- (id)getParameters;
- (id)getRoot;
- (struct shared_ptr<siri::dialogengine::File> { struct File {} *x1; struct __shared_weak_count {} *x2; })getSharedPtr;
- (id)getValidationErrors;
- (id)getValidationWarnings;
- (id)id;
- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::File> { struct File {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)localeFilename;
- (id)paramsFilename;
- (void)setId:(id)arg1;
- (void)setLocaleFilename:(id)arg1;
- (void)setParamsFilename:(id)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::File> { struct File {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
