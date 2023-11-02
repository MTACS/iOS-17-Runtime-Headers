
@interface PHASEMixer : NSObject {
    double  _gain;
    PHASEMetaParameter * _gainMetaParameter;
    NSString * _identifier;
    struct weak_ptr<Phase::ActionTreeObject> { 
        struct ActionTreeObject {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _weakActionTreeObject;
}

@property (nonatomic, readonly) double gain;
@property (nonatomic, readonly) PHASEMetaParameter *gainMetaParameter;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic) struct weak_ptr<Phase::ActionTreeObject> { struct ActionTreeObject {} *x1; struct __shared_weak_count {} *x2; } weakActionTreeObject;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)gain;
- (id)gainMetaParameter;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUID:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setWeakActionTreeObject:(struct weak_ptr<Phase::ActionTreeObject> { struct ActionTreeObject {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)uid;
- (struct weak_ptr<Phase::ActionTreeObject> { struct ActionTreeObject {} *x1; struct __shared_weak_count {} *x2; })weakActionTreeObject;

@end
