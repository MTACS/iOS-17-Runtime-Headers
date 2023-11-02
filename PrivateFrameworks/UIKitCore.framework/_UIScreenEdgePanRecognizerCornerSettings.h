
@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings {
    double  _cornerAngleWindow;
    double  _cornerSize;
}

@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double cornerAngleWindowDegreees;
@property (nonatomic) double cornerSize;

+ (id)keyPathsForValuesAffectingCornerAngleWindowDegreees;
+ (id)settingsControllerModule;

- (double)cornerAngleWindow;
- (double)cornerAngleWindowDegreees;
- (double)cornerSize;
- (void)setCornerAngleWindow:(double)arg1;
- (void)setCornerAngleWindowDegreees:(double)arg1;
- (void)setCornerSize:(double)arg1;
- (void)setDefaultValues;

@end
