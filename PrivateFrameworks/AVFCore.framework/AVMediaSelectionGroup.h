
@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal * _mediaSelectionGroup;
}

@property (nonatomic, readonly) bool allowsEmptySelection;
@property (nonatomic, readonly) AVMediaSelectionOption *defaultOption;
@property (nonatomic, readonly) NSArray *options;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;

- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (bool)_isStreamingGroup;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (bool)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)_primaryMediaCharacteristic;
- (id)_weakReference;
- (bool)allowsEmptySelection;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBundleIdentifier;
- (void)dealloc;
- (id)defaultOption;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)options;
- (void)setCurrentBundleIdentifier:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)makeNowPlayingInfoLanguageOptionGroup;

@end
