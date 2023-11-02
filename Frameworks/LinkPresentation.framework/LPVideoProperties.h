
@interface LPVideoProperties : LPVisualMediaProperties <NSCopying> {
    bool  _hasAudio;
    UIColor * _overlappingControlsColor;
}

@property (setter=_setOverlappingControlsColor:, nonatomic, retain) UIColor *_overlappingControlsColor;
@property (nonatomic) bool hasAudio;

- (void).cxx_destruct;
- (id)_overlappingControlsColor;
- (void)_setOverlappingControlsColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasAudio;
- (bool)isEqual:(id)arg1;
- (void)setHasAudio:(bool)arg1;

@end
