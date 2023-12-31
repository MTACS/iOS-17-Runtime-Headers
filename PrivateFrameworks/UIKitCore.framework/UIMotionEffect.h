
@interface UIMotionEffect : NSObject <NSCoding, NSCopying> {
    NSString * _animationIdentifier;
    _UIMotionAnalyzerSettings * _preferredMotionAnalyzerSettings;
}

- (void).cxx_destruct;
- (id)_animationIdentifier;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)_preferredMotionAnalyzerSettings;
- (void)_setPreferredMotionAnalyzerSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;

@end
