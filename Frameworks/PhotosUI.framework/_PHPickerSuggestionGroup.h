
@interface _PHPickerSuggestionGroup : NSObject <NSCopying, NSSecureCoding> {
    long long  _defaultSuggestionIndex;
    bool  _isForWallpaper;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) id defaultSuggestion;
@property (nonatomic, readonly) long long defaultSuggestionIndex;
@property (nonatomic, readonly) bool isForWallpaper;
@property (nonatomic, readonly, copy) NSArray *suggestions;

+ (id)_wallpaperSuggestionGroupWithDefaultSuggestionIndex:(long long)arg1;
+ (id)_wallpaperSuggestionGroupWithDefaultSuggestionIndex:(long long)arg1 allowSettlingEffectSuggestions:(bool)arg2;
+ (id)assetCollectionSuggestionGroup:(id)arg1 extendedCuratedAssetsOnly:(bool)arg2 shouldReverseSortOrder:(bool)arg3;
+ (id)deviceOwnerSuggestionGroup;
+ (id)livePhotoWallpaperSuggestionGroup;
+ (id)portraitWallpaperSuggestionGroup;
+ (id)shuffleWallpaperSuggestionGroup;
+ (id)stickersSuggestionGroup;
+ (bool)supportsSecureCoding;
+ (id)wallpaperSuggestionGroup;

- (void).cxx_destruct;
- (id)_initWithSuggestions:(id)arg1 defaultSuggestionIndex:(long long)arg2 isForWallpaper:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultSuggestion;
- (long long)defaultSuggestionIndex;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForWallpaper;
- (id)suggestions;

@end
