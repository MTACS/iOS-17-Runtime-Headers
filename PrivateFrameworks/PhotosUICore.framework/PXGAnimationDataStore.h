
@interface PXGAnimationDataStore : NSObject <PXGDiagnosticsProvider> {
    NSMutableIndexSet * _activeGroupIndexes;
    unsigned short * _animationIndexBySpriteIndex;
    unsigned short  _groupCapacity;
    unsigned short * _groupIndexByAnimationIndex;
    struct { long long x1; double x2; double x3; float x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; void *x6; void *x7; void *x8; void *x9; } * _groupInfos;
    unsigned short  _mappedAnimationCapacity;
    unsigned short  _mappedAnimationCount;
    unsigned int  _mappedSpriteCapacity;
    unsigned int  _mappedSpriteCount;
    unsigned int  _spriteCapacity;
    unsigned int  _spriteCount;
    struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8; struct { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; } x11; struct { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; struct { float x_13_1_1; float x_13_1_2; float x_13_1_3; } x13; struct { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; struct { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; struct { float x_16_1_1; float x_16_1_2; float x_16_1_3; } x16; struct { float x_17_1_1; float x_17_1_2; float x_17_1_3; } x17; } * _spriteInfos;
}

@property (nonatomic, readonly, copy) NSIndexSet *activeGroupIndexes;
@property (nonatomic, readonly) unsigned short*animationIndexBySpriteIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic, readonly) unsigned short*groupIndexByAnimationIndex;
@property (nonatomic, readonly) struct { long long x1; double x2; double x3; float x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; void *x6; void *x7; void *x8; void *x9; }*groupInfos;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short mappedAnimationCount;
@property (nonatomic) unsigned int mappedSpriteCount;
@property (nonatomic) unsigned int spriteCount;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8; struct { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; } x11; struct { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; struct { float x_13_1_1; float x_13_1_2; float x_13_1_3; } x13; struct { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; struct { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; struct { float x_16_1_1; float x_16_1_2; float x_16_1_3; } x16; struct { float x_17_1_1; float x_17_1_2; float x_17_1_3; } x17; }*spriteInfos;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resizeStorageToGroupIndex:(unsigned short)arg1;
- (id)activeGroupIndexes;
- (unsigned short*)animationIndexBySpriteIndex;
- (void)applySpriteChangeDetails:(id)arg1;
- (void)checkInGroupAtIndexes:(id)arg1;
- (unsigned short)checkOutGroup;
- (void)dealloc;
- (id)diagnosticDescription;
- (unsigned short*)groupIndexByAnimationIndex;
- (struct { long long x1; double x2; double x3; float x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; void *x6; void *x7; void *x8; void *x9; }*)groupInfos;
- (void)increaseMappedSpriteCountBy:(unsigned int)arg1 usingAnimationIndex:(unsigned short)arg2;
- (id)init;
- (unsigned short)mappedAnimationCount;
- (unsigned int)mappedSpriteCount;
- (void)setMappedAnimationCount:(unsigned short)arg1;
- (void)setMappedSpriteCount:(unsigned int)arg1;
- (void)setSpriteCount:(unsigned int)arg1;
- (unsigned int)spriteCount;
- (id)spriteIndexesExpiringAtTime:(double)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8; struct { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; } x11; struct { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; struct { float x_13_1_1; float x_13_1_2; float x_13_1_3; } x13; struct { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; struct { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; struct { float x_16_1_1; float x_16_1_2; float x_16_1_3; } x16; struct { float x_17_1_1; float x_17_1_2; float x_17_1_3; } x17; }*)spriteInfos;

@end
