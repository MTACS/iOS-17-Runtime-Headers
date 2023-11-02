
@interface CAMDrawerSemanticStyleButton : CAMControlDrawerCustomButton {
    bool  _on;
    CAMSemanticStyle * _semanticStyle;
}

@property (getter=isOn, nonatomic) bool on;
@property (setter=setSemanticStyle:, nonatomic, retain) CAMSemanticStyle *semanticStyle;

- (void).cxx_destruct;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (bool)isOn;
- (id)semanticStyle;
- (void)setOn:(bool)arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSemanticStyle:(id)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
