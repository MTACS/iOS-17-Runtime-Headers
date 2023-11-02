
@interface _UISearchBarBehaviorSettings : PTSettings {
    double  _buttonGenerousPadding;
    double  _buttonMinimumHeight;
    double  _buttonTightPadding;
    bool  _useGenerousPadding;
}

@property (nonatomic) double buttonGenerousPadding;
@property (nonatomic) double buttonMinimumHeight;
@property (nonatomic) double buttonTightPadding;
@property (nonatomic) bool useGenerousPadding;

+ (id)settingsControllerModule;

- (double)buttonGenerousPadding;
- (double)buttonMinimumHeight;
- (double)buttonTightPadding;
- (void)setButtonGenerousPadding:(double)arg1;
- (void)setButtonMinimumHeight:(double)arg1;
- (void)setButtonTightPadding:(double)arg1;
- (void)setDefaultValues;
- (void)setUseGenerousPadding:(bool)arg1;
- (bool)useGenerousPadding;

@end
