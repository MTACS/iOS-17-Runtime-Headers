
@interface MCSingleAppModeConfiguration : NSObject <AEDDictionaryEncodable> {
    bool  _allowAccessibilitySpeech;
    bool  _allowActivityContinuation;
    bool  _allowAutoCorrection;
    bool  _allowContinuousPathKeyboard;
    bool  _allowDefinitionLookup;
    bool  _allowDictation;
    bool  _allowKeyboardShortcuts;
    bool  _allowPasswordAutoFill;
    bool  _allowPredictiveKeyboard;
    bool  _allowQuickNote;
    bool  _allowScreenShot;
    bool  _allowSelectedTextSharing;
    bool  _allowSmartPunctuation;
    bool  _allowSpellCheck;
    bool  _allowTranslationLookup;
}

@property (nonatomic) bool allowAccessibilitySpeech;
@property (nonatomic) bool allowActivityContinuation;
@property (nonatomic) bool allowAutoCorrection;
@property (nonatomic) bool allowContinuousPathKeyboard;
@property (nonatomic) bool allowDefinitionLookup;
@property (nonatomic) bool allowDictation;
@property (nonatomic) bool allowKeyboardShortcuts;
@property (nonatomic) bool allowPasswordAutoFill;
@property (nonatomic) bool allowPredictiveKeyboard;
@property (nonatomic) bool allowQuickNote;
@property (nonatomic) bool allowScreenShot;
@property (nonatomic) bool allowSelectedTextSharing;
@property (nonatomic) bool allowSmartPunctuation;
@property (nonatomic) bool allowSmartPuncutation;
@property (nonatomic) bool allowSpellCheck;
@property (nonatomic) bool allowTranslationLookup;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (bool)allowAccessibilitySpeech;
- (bool)allowActivityContinuation;
- (bool)allowAutoCorrection;
- (bool)allowContinuousPathKeyboard;
- (bool)allowDefinitionLookup;
- (bool)allowDictation;
- (bool)allowKeyboardShortcuts;
- (bool)allowPasswordAutoFill;
- (bool)allowPredictiveKeyboard;
- (bool)allowQuickNote;
- (bool)allowScreenShot;
- (bool)allowSelectedTextSharing;
- (bool)allowSmartPunctuation;
- (bool)allowSmartPuncutation;
- (bool)allowSpellCheck;
- (bool)allowTranslationLookup;
- (id)serializedConfiguration;
- (void)setAllowAccessibilitySpeech:(bool)arg1;
- (void)setAllowActivityContinuation:(bool)arg1;
- (void)setAllowAutoCorrection:(bool)arg1;
- (void)setAllowContinuousPathKeyboard:(bool)arg1;
- (void)setAllowDefinitionLookup:(bool)arg1;
- (void)setAllowDictation:(bool)arg1;
- (void)setAllowKeyboardShortcuts:(bool)arg1;
- (void)setAllowPasswordAutoFill:(bool)arg1;
- (void)setAllowPredictiveKeyboard:(bool)arg1;
- (void)setAllowQuickNote:(bool)arg1;
- (void)setAllowScreenShot:(bool)arg1;
- (void)setAllowSelectedTextSharing:(bool)arg1;
- (void)setAllowSmartPunctuation:(bool)arg1;
- (void)setAllowSmartPuncutation:(bool)arg1;
- (void)setAllowSpellCheck:(bool)arg1;
- (void)setAllowTranslationLookup:(bool)arg1;

// Image: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Frameworks/AACDependencies.framework/AACDependencies

- (id)dictionaryValue;

@end
