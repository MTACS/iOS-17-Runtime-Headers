
@interface PUPickerSuggestionResultFetcherResult : NSObject {
    void fetchResult;
    void inlinePlaybackDisallowedAssetUUIDs;
    void suggestion;
    void suggestionSubtypeByAssetUUID;
}

@property (nonatomic, readonly) NSArray *allowedColumnsOverride;
@property (nonatomic, readonly) id fetchResult;
@property (nonatomic, readonly) NSSet *inlinePlaybackDisallowedAssetUUIDs;
@property (nonatomic, readonly) bool isLiveWallpaperSuggestion;
@property (nonatomic, readonly) long long numberOfItemsToPlayInline;
@property (nonatomic, readonly) unsigned long long posterClassification;
@property (nonatomic, readonly) bool selectedFilterableSuggestion;
@property (nonatomic, readonly) bool shouldReverseSortOrder;
@property (nonatomic, readonly) NSDictionary *suggestionSubtypeByAssetUUID;

- (void).cxx_destruct;
- (id)allowedColumnsOverride;
- (id)fetchResult;
- (id)init;
- (id)inlinePlaybackDisallowedAssetUUIDs;
- (bool)isLiveWallpaperSuggestion;
- (long long)numberOfItemsToPlayInline;
- (unsigned long long)posterClassification;
- (bool)selectedFilterableSuggestion;
- (bool)shouldReverseSortOrder;
- (id)suggestionSubtypeByAssetUUID;

@end
