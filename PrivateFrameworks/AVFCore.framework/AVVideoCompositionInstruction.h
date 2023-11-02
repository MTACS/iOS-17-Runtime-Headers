
@interface AVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying, NSMutableCopying, NSSecureCoding> {
    AVVideoCompositionInstructionInternal * _instruction;
}

@property (nonatomic, readonly, retain) struct CGColor { }*backgroundColor;
@property (nonatomic, readonly) bool containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enablePostProcessing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *layerInstructions;
@property (nonatomic, readonly) int passthroughTrackID;
@property (nonatomic, readonly) NSArray *requiredSourceSampleDataTrackIDs;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_deepCopy;
- (void)_setValuesFromDictionary:(id)arg1;
- (struct CGColor { }*)backgroundColor;
- (id)blendingTransferFunction;
- (bool)containsTweening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enablePostProcessing;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layerInstructions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)passthroughTrackID;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBlendingTransferFunction:(id)arg1;
- (void)setEnablePostProcessing:(bool)arg1;
- (void)setLayerInstructions:(id)arg1;
- (void)setRequiredSourceSampleDataTrackIDs:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end