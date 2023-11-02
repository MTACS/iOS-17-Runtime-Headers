
@interface PXPeopleDetailSettings : PXSettings {
    bool  _showAnnotateButton;
    unsigned long long  _unverifiedPeopleAnnotationMinimumFaceCount;
}

@property (nonatomic) bool showAnnotateButton;
@property (nonatomic) unsigned long long unverifiedPeopleAnnotationMinimumFaceCount;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setShowAnnotateButton:(bool)arg1;
- (void)setUnverifiedPeopleAnnotationMinimumFaceCount:(unsigned long long)arg1;
- (bool)showAnnotateButton;
- (unsigned long long)unverifiedPeopleAnnotationMinimumFaceCount;

@end
