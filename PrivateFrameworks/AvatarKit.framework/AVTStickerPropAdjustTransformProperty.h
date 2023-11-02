
@interface AVTStickerPropAdjustTransformProperty : NSObject {
    void _position;
    long long  _presetCategory;
    id  _presetValue;
    void _rotation;
    void _scale;
}

@property (nonatomic, readonly) void position;
@property (nonatomic, readonly) long long presetCategory;
@property (nonatomic, readonly) id presetValue;
@property (nonatomic, readonly) void rotation;
@property (nonatomic, readonly) void scale;

- (void).cxx_destruct;
- (void)applyAdjustmentIfNeededToNode:(id)arg1 forMemoji:(id)arg2 ignoreScaleZ:(bool)arg3;
- (id)initWithPresetCategory:(void *)arg1 presetValue:(void *)arg2 position:(void *)arg3 rotation:(void *)arg4 scale:(void *)arg5; // needs 5 arg types, found 2: long long, id
- (void)position;
- (long long)presetCategory;
- (id)presetValue;
- (void)rotation;
- (void)scale;

@end
