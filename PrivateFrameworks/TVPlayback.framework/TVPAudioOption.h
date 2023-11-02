
@interface TVPAudioOption : NSObject {
    AVMediaSelectionOption * _avMediaSelectionOption;
    NSString * _languageCodeBCP47;
    NSString * _languageCodeFromLocale;
    NSString * _localizedDisplayString;
    id  _propertyListRepresentation;
    NSString * _savedLocaleLanguageCode;
    NSString * _title;
    int  _trackID;
}

@property (nonatomic, retain) AVMediaSelectionOption *avMediaSelectionOption;
@property (nonatomic, readonly) bool hasAudioDescriptions;
@property (nonatomic, copy) NSString *languageCodeBCP47;
@property (nonatomic, copy) NSString *languageCodeFromLocale;
@property (nonatomic, copy) NSString *localizedDisplayString;
@property (nonatomic, retain) id propertyListRepresentation;
@property (nonatomic, copy) NSString *savedLocaleLanguageCode;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int trackID;

- (void).cxx_destruct;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)avMediaSelectionOption;
- (void)dealloc;
- (id)description;
- (bool)hasAudioDescriptions;
- (bool)hasMediaCharacteristic:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOption:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithSavedTrackID:(int)arg1 savedLocaleLanguageCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)languageCodeBCP47;
- (id)languageCodeFromLocale;
- (id)localizedDisplayString;
- (id)propertyListRepresentation;
- (id)savedLocaleLanguageCode;
- (void)setAvMediaSelectionOption:(id)arg1;
- (void)setLanguageCodeBCP47:(id)arg1;
- (void)setLanguageCodeFromLocale:(id)arg1;
- (void)setLocalizedDisplayString:(id)arg1;
- (void)setPropertyListRepresentation:(id)arg1;
- (void)setSavedLocaleLanguageCode:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackID:(int)arg1;
- (id)title;
- (int)trackID;

@end
