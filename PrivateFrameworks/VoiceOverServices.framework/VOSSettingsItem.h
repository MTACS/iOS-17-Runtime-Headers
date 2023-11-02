
@interface VOSSettingsItem : NSObject {
    NSString * _identifier;
    long long  _itemType;
    AXSBQuickSettingsData * _settingsData;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long itemType;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, retain) AXSBQuickSettingsData *settingsData;

+ (id)Activities;
+ (id)AudioDucking;
+ (id)BrailleAlerts;
+ (id)BrailleAutoAdvanceDuration;
+ (id)BrailleFormatting;
+ (id)BrailleInput;
+ (id)BrailleOutput;
+ (id)BrailleTables;
+ (id)CaptionPanel;
+ (id)DirectTouch;
+ (id)GestureDirection;
+ (id)HardwareTypingFeedback;
+ (id)Hints;
+ (id)ImageDescriptions;
+ (id)Language;
+ (id)LargeCursor;
+ (id)MediaDescriptions;
+ (id)NavigateImages;
+ (id)NavigationStyle;
+ (id)PhoneticFeedback;
+ (id)Pitch;
+ (id)Punctuation;
+ (id)RotorActionConfirmation;
+ (id)ScreenRecognition;
+ (id)SendToHDMI;
+ (id)SlideToType;
+ (id)SoftwareTypingFeedback;
+ (id)SoundCurtain;
+ (id)Sounds;
+ (id)SpeakNotifications;
+ (id)SpeakingRate;
+ (id)TypingStyle;
+ (id)Volume;
+ (id)allSettingsItems;
+ (id)settingsIDtoItemMap:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 itemType:(long long)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (long long)itemType;
- (id)localizedName;
- (void)setIdentifier:(id)arg1;
- (void)setItemType:(long long)arg1;
- (void)setSettingsData:(id)arg1;
- (id)settingsData;

@end
