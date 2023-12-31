
@interface UIMotionEffectGroup : UIMotionEffect {
    NSArray * _motionEffects;
}

@property (nonatomic, copy) NSArray *motionEffects;

- (void).cxx_destruct;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (id)motionEffects;
- (void)setMotionEffects:(id)arg1;

@end
