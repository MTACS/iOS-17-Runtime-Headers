
@interface RBTransition : NSObject <NSCopying> {
    bool  _is_default;
    struct refcounted_ptr<RB::Transition> { 
        struct Transition {} *_p; 
    }  _transition;
}

@property (nonatomic) float addRemoveDuration;
@property (nonatomic, retain) RBAnimation *animation;
@property (nonatomic, readonly, copy) NSArray *effects;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) unsigned int method;
@property (getter=isReplaceable, nonatomic) bool replaceable;

+ (id)defaultTransition;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addEffect:(id)arg1;
- (float)addRemoveDuration;
- (id)animation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effects;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isReplaceable;
- (unsigned int)maxChanges;
- (unsigned int)method;
- (void)setAddRemoveDuration:(float)arg1;
- (void)setAnimation:(id)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setReplaceable:(bool)arg1;

@end
