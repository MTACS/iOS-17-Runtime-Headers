
@interface _EARArtifact : NSObject {
    struct shared_ptr<quasar::artifact::Artifact> { 
        struct Artifact {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _artifact;
}

+ (void)initialize;
+ (bool)isValid:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getContent:(id)arg1;
- (id)getInfo:(id)arg1;
- (id)getLocale;
- (id)getVersion;
- (bool)hasContent:(id)arg1;
- (bool)hasInfo:(id)arg1;
- (id)initWithAcceptedContent:(id)arg1 acceptedInfo:(id)arg2 dependent:(id)arg3;
- (bool)isEquivalentTo:(id)arg1;
- (bool)isMinimalistic;
- (void)minimize;
- (bool)supportsContent:(id)arg1;
- (bool)supportsInfo:(id)arg1;
- (bool)write:(id)arg1;

@end
