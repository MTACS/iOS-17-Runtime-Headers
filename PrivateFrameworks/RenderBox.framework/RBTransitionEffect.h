
@interface RBTransitionEffect : NSObject {
    union EffectOrArg { 
        struct Effect { 
            unsigned int type : 7; 
            unsigned int has_animation : 1; 
            unsigned int events : 6; 
            unsigned int flags : 2; 
            unsigned char begin_or_insert_animation; 
            unsigned char dur_or_remove_animation; 
        } effect; 
        float arg; 
        unsigned int int_arg; 
    }  _args;
    struct Effect { 
        unsigned int type : 7; 
        unsigned int has_animation : 1; 
        unsigned int events : 6; 
        unsigned int flags : 2; 
        unsigned char begin_or_insert_animation; 
        unsigned char dur_or_remove_animation; 
    }  _effect;
}

@property (nonatomic) unsigned long long animationIndex;
@property (nonatomic) float beginTime;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int events;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long insertAnimationIndex;
@property (nonatomic) unsigned long long removeAnimationIndex;
@property (nonatomic) unsigned int type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)animationIndex;
- (float)argumentValueAtIndex:(unsigned long long)arg1;
- (float)beginTime;
- (float)duration;
- (unsigned int)events;
- (unsigned int)flags;
- (unsigned long long)hash;
- (unsigned long long)insertAnimationIndex;
- (unsigned int)integerArgumentValueAtIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)removeAnimationIndex;
- (void)setAnimationIndex:(unsigned long long)arg1;
- (void)setArgumentValue:(float)arg1 atIndex:(unsigned long long)arg2;
- (void)setBeginTime:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setEvents:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInsertAnimationIndex:(unsigned long long)arg1;
- (void)setIntegerArgumentValue:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)setRemoveAnimationIndex:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
