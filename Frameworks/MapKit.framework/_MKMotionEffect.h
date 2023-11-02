
@interface _MKMotionEffect : UIMotionEffect {
    <_MKMotionEffectDelegate> * _delegate;
    bool  _enabled;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _offset;
}

@property (nonatomic) <_MKMotionEffectDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (id)delegate;
- (bool)isEnabled;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })offsetWithScale:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })rawOffset;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformWithTranslationScale:(struct UIOffset { double x1; double x2; })arg1 rotationScale:(struct UIOffset { double x1; double x2; })arg2;

@end
