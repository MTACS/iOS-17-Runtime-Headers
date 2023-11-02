
@interface DEDialog : DENode {
    struct shared_ptr<siri::dialogengine::Dialog> { 
        struct Dialog {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::Dialog> { struct Dialog {} *x1; struct __shared_weak_count {} *x2; } This;
@property DESpeakableString *caption;
@property DESpeakableString *content;
@property (retain) NSString *id;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::Dialog> { struct Dialog {} *x1; struct __shared_weak_count {} *x2; })This;
- (id)caption;
- (id)content;
- (id)getExpandedCaption:(id)arg1;
- (id)getExpandedContent:(id)arg1;
- (id)id;
- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Dialog> { struct Dialog {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelectable:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setId:(id)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::Dialog> { struct Dialog {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)validate:(id)arg1;

@end
