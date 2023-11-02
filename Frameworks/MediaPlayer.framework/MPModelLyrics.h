
@interface MPModelLyrics : MPModelObject

@property (nonatomic, copy) NSString *TTML;
@property (nonatomic) bool hasLibraryLyrics;
@property (nonatomic) bool hasStoreLyrics;
@property (nonatomic) bool hasTimeSyncedLyrics;
@property (nonatomic, copy) NSString *text;

+ (void)__MPModelPropertyLyricsHasLibraryLyrics__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsHasStoreLyrics__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsHasTimeSyncedLyrics__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsTTML__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsText__MAPPING_MISSING__;
+ (id)__TTML_KEY;
+ (id)__hasLibraryLyrics_KEY;
+ (id)__hasStoreLyrics_KEY;
+ (id)__hasTimeSyncedLyrics_KEY;
+ (id)__text_KEY;

@end
