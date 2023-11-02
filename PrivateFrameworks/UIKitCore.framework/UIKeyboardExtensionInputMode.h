
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {
    NSExtension * _extension;
}

@property (nonatomic, retain) NSExtension *extension;

- (void).cxx_destruct;
- (id)_indicatorIconWithBackground:(bool)arg1 iconWidth:(double)arg2 scaleFactor:(double)arg3;
- (id)containingBundle;
- (id)containingBundleDisplayName;
- (bool)defaultLayoutIsASCIICapable;
- (id)displayName;
- (id)extendedDisplayName;
- (id)extension;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isDesiredForTraits:(id)arg1;
- (bool)isExtensionInputMode;
- (bool)isStalledExtensionInputMode;
- (id)normalizedIdentifierLevels;
- (void)setExtension:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (bool)showSWLayoutWithHWKeyboard;

@end
