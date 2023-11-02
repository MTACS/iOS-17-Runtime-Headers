
@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal * _mediaSelectionOption;
}

@property (getter=isAC3Only, readonly) bool AC3Only;
@property (getter=isCC, readonly) bool CC;
@property (getter=isSDH, readonly) bool SDH;
@property (getter=isAuxiliary, readonly) bool auxiliary;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSString *avkit_displayName;
@property (readonly) NSNumber *avkit_persistentIdentifier;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSString *displayName;
@property (getter=isEasyReader, readonly) bool easyReader;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (getter=isMain, readonly) bool main;
@property (nonatomic, readonly) NSString *mediaRemoteIdentifier;
@property (nonatomic, readonly) NSArray *mediaSubTypes;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) bool mpIsOnlyAC3;
@property (nonatomic, readonly) bool mpIsSDH;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (nonatomic, readonly) NSString *shortLocalizedDisplayName;
@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly) bool tvp_isSDHSubtitle;
@property (nonatomic, readonly) NSString *tvp_languageCodeFromLocale;
@property (nonatomic, readonly) NSString *tvp_localizedDisplayString;
@property (nonatomic, readonly) NSString *unicodeLanguageCode;
@property (nonatomic, readonly) NSString *unicodeLanguageIdentifier;
@property (nonatomic, readonly) NSString *vui_localizedDisplayNameOverride;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (bool)_plistHasOptionIdentifier:(id)arg1;
+ (id)mediaSelectionNilOptionForGroup:(id)arg1;
+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(bool)arg4;

- (id)_ancillaryDescription;
- (id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(bool)arg2;
- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (bool)_isAuxiliaryContent;
- (bool)_isDesignatedDefault;
- (bool)_isMainProgramContent;
- (id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(bool)arg2;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(bool)arg2 excludeM3U8Metadata:(bool)arg3;
- (bool)_representsNilSelection;
- (id)_taggedMediaCharacteristics;
- (id)_title;
- (id)_track;
- (bool)_updateDisplayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(bool)arg2 context:(long long)arg3;
- (id)associatedExtendedLanguageTag;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)associatedPersistentIDs;
- (id)associatedUnicodeLanguageIdentifier;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)displayName;
- (id)displayNameWithLocale:(id)arg1;
- (bool)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (id)fallbackIDs;
- (id)group;
- (bool)hasMediaCharacteristic:(id)arg1;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (bool)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)propertyList;
- (id)track;
- (int)trackID;
- (id)unicodeLanguageCode;
- (id)unicodeLanguageIdentifier;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)avkit_autoOption;
+ (id)avkit_offOption;

- (id)avkit_displayName;
- (id)avkit_persistentIdentifier;
- (id)avkit_title;
- (bool)isAC3Only;
- (bool)isAuxiliary;
- (bool)isCC;
- (bool)isEasyReader;
- (bool)isMain;
- (bool)isSDH;
- (long long)languageCompare:(id)arg1 currentLanguageCode:(id)arg2 currentLanguageIdentifier:(id)arg3;
- (id)localizedDisplayName;
- (id)mediaRemoteIdentifier;
- (id)shortLocalizedDisplayName;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)_languageOptionIdentifier;
- (id)makeNowPlayingInfoLanguageOption;
- (bool)mpIsOnlyAC3;
- (bool)mpIsSDH;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (bool)tvp_isSDHSubtitle;
- (id)tvp_languageCodeFromLocale;
- (id)tvp_localizedDisplayString;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)vui_localizedDisplayNameOverride;

@end
