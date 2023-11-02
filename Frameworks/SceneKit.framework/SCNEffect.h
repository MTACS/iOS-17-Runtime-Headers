
@interface SCNEffect : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _animationsLock;
    NSMutableDictionary * _bindings;
    unsigned int  _isPresentationInstance;
    NSString * _name;
    NSMutableDictionary * _parameters;
    struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; } * _vfx;
    NSString * _vfxName;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) SCNEffect *presentationEffect;
@property (readonly) Class superclass;

+ (id)effectWithName:(id)arg1;
+ (id)effectWithVFXRef:(struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initPresentationEffectWithVFXRef:(struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithVFXRef:(struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (id)name;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parameters;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationEffect;
- (id)presentationInstance;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vfxName;
- (struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; }*)vfxRef;

@end
