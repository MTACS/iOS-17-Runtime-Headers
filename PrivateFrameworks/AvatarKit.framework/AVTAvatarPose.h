
@interface AVTAvatarPose : NSObject <NSCopying> {
    double  _bakedAnimationBlendFactor;
    bool  _hasNeckOrientation;
    bool  _hasNeckPosition;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _neckOrientation;
    void _neckPosition;
    NSMutableDictionary * _weights;
}

@property (nonatomic) double bakedAnimationBlendFactor;
@property (nonatomic) struct { } neckOrientation;
@property (nonatomic) void neckPosition;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)friendlyPose;
+ (id)neutralPose;
+ (id)posesForAnimojiNamed:(id)arg1 inPosePack:(id)arg2;
+ (id)posesForMemojiInPosePack:(id)arg1;
+ (id)posesInPosePack:(id)arg1;
+ (id)posesInPosePack:(id)arg1 avatarSelectionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)affectsPhysicsSimulation;
- (double)bakedAnimationBlendFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hashString;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithWeights:(id)arg1 neckPosition:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 neckOrientation:(struct { }*)arg3 bakedAnimationBlendFactor:(double)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPose:(id)arg1;
- (bool)isFriendlyPose;
- (bool)isNeutralPose;
- (struct { })neckOrientation;
- (void)neckPosition;
- (id)poseByMergingPose:(id)arg1;
- (void)setBakedAnimationBlendFactor:(double)arg1;
- (void)setNeckOrientation:(struct { })arg1;
- (void)setNeckPosition;
- (void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2;
- (void)setWeights:(id)arg1;
- (double)weightForBlendShapeNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (id)_avtui_identifier;

@end
