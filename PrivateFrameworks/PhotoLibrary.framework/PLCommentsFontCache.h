
@interface PLCommentsFontCache : NSObject {
    UIFontDescriptor * __bodyFontDescriptor;
    UIFontDescriptor * __emphasizedBodyFontDescriptor;
    UIFontDescriptor * __emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor * __shortBodyFontDescriptor;
    UIFontDescriptor * __shortCaptionFontDescriptor;
    UIFontDescriptor * __shortSubheadlineFontDescriptor;
}

@property (nonatomic, readonly) UIFont *commentAttributionDateFont;
@property (nonatomic, readonly) UIFont *commentAttributionNameFont;
@property (nonatomic, readonly) UIFont *commentEntryFont;
@property (nonatomic, readonly) UIFont *commentSendButtonFont;
@property (nonatomic, readonly) UIFont *commentTextFont;
@property (nonatomic, readonly) UIFont *likeFont;
@property (nonatomic, readonly) UIFont *youLikeFont;

+ (id)sharedCache;

- (id)_bodyFontDescriptor;
- (void)_contentSizesDidChange:(id)arg1;
- (id)_emphasizedBodyFontDescriptor;
- (id)_emphasizedShortCaptionFontDescriptor;
- (void)_invalidateCache;
- (id)_shortBodyFontDescriptor;
- (id)_shortCaptionFontDescriptor;
- (id)_shortSubheadlineFontDescriptor;
- (id)commentAttributionDateFont;
- (id)commentAttributionNameFont;
- (id)commentEntryFont;
- (id)commentSendButtonFont;
- (id)commentTextFont;
- (void)dealloc;
- (id)init;
- (id)likeFont;
- (id)youLikeFont;

@end
