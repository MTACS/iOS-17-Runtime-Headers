
@interface SCNMorpher : NSObject <NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _animationsLock;
    NSMutableDictionary * _bindings;
    long long  _calculationMode;
    NSArray * _correctiveDriverCounts;
    NSArray * _correctiveDriverIndices;
    NSArray * _correctiveInBetweenCounts;
    NSArray * _correctiveInBetweenInfluenceWeights;
    NSArray * _correctivesAndInBetweens;
    NSArray * _inBetweenCounts;
    NSArray * _inBetweenInfluenceWeights;
    unsigned int  _isPresentationInstance;
    NSDictionary * _mainTargetNamesToIndexes;
    NSArray * _mainTargets;
    NSArray * _mainTargetsAndInBetweens;
    struct __C3DMorph { } * _morpher;
    NSString * _name;
    bool  _unifyNormal;
    bool  _useSparseTargets;
    unsigned long long  _weightCount;
    float * _weights;
}

@property (readonly) NSArray *animationKeys;
@property (setter=avt_setSimdContentsTransform:, nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } avt_simdContentsTransform;
@property (nonatomic) long long calculationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targets;
@property bool unifiesNormals;
@property (nonatomic, retain) NSArray *weights;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (Class)SCNUID_classForElementOfArray:(id)arg1;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph { }*)arg1;
+ (bool)supportsSecureCoding;
+ (id)weightIndexStringForIndex:(long long)arg1;

- (void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNMorpher:(id)arg1;
- (void)_customEncodingOfSCNMorpher:(id)arg1;
- (void)_didDecodeSCNMorpher:(id)arg1;
- (bool)_isUsingSparseTargets;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (double)_presentationWeightForTargetAtIndex:(unsigned long long)arg1 token:(const void*)arg2;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateCorrectivesAndInBetween:(id)arg1;
- (void)_updateTargetsAndInBetween:(id)arg1;
- (long long)_weightIndexForTargetNamed:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (long long)calculationMode;
- (void)clearCorrectives;
- (void)clearInBetweens;
- (void)convertToAdditiveWithBaseGeometry:(id)arg1;
- (void)convertToSparseWithBaseGeometry:(id)arg1;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)correctiveDriverCountForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)correctiveDriverCounts;
- (id)correctiveDriverIndices;
- (id)correctiveDriverIndicesForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)correctiveInBetweenCounts;
- (id)correctiveInBetweenWeights;
- (id)correctives;
- (id)correctivesAndInBetween;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)inBetweenCounts;
- (id)inBetweenTargetsForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)inBetweenTargetsForTargetAtIndex:(unsigned long long)arg1;
- (id)inBetweenWeights;
- (id)inBetweenWeightsForCorrectiveAtIndex:(unsigned long long)arg1;
- (id)inBetweenWeightsForTargetAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMorphRef:(struct __C3DMorph { }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DMorph { }*)morphRef;
- (id)name;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationMorpher;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setCalculationMode:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldClearCPUDataAfterUpload:(bool)arg1;
- (void)setShouldMorphNormals:(bool)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setTargets:(id)arg1;
- (void)setTargets:(id)arg1 withInBetweenTargetCounts:(id)arg2 inBetweenWeights:(id)arg3;
- (void)setTargetsAndInBetweens:(id)arg1 inBetweenCounts:(id)arg2 inBetweenWeights:(id)arg3 correctives:(id)arg4 driverCounts:(id)arg5 driverIndices:(id)arg6 inBetweenCounts:(id)arg7 inBetweenWeights:(id)arg8;
- (void)setUnifiesNormals:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (void)setWeight:(double)arg1 forTargetNamed:(id)arg2;
- (void)setWeightIncrementalThreshold:(float)arg1;
- (void)setWeights:(id)arg1;
- (bool)shouldClearCPUDataAfterUpload;
- (bool)shouldMorphNormals;
- (id)targets;
- (id)targetsAndInBetween;
- (void)unbindAnimatablePath:(id)arg1;
- (bool)unifiesNormals;
- (id)valueForUndefinedKey:(id)arg1;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (double)weightForTargetNamed:(id)arg1;
- (float)weightIncrementalThreshold;
- (id)weights;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

- (void)avt_buildInternalSupportForCorrectivesWithBlock:(id /* block */)arg1;

@end
