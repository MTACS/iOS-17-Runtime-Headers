
@interface PXPhotoPickerSettings : PXSettings {
    bool  _useNavBarAnimatedTransition;
}

@property (nonatomic) bool useNavBarAnimatedTransition;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setUseNavBarAnimatedTransition:(bool)arg1;
- (bool)useNavBarAnimatedTransition;

@end
