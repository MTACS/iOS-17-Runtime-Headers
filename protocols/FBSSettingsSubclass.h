
@protocol FBSSettingsSubclass <FBSSettings, BSSettingDescriptionProvider>

@required

+ (Class)subclassExtension;

- (BSSettings *)otherSettings;

@end
