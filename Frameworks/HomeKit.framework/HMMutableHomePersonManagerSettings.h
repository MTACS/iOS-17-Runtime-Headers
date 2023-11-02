
@interface HMMutableHomePersonManagerSettings : HMHomePersonManagerSettings

@property (getter=isFaceClassificationEnabled) bool faceClassificationEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnabled:(bool)arg1;

@end
