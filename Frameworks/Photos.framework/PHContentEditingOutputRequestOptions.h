
@interface PHContentEditingOutputRequestOptions : NSObject <NSSecureCoding> {
    bool  _asyncAdjustment;
    bool  _onlyChangingOriginalChoice;
    long long  _playbackStyle;
    bool  _preferHEICForRenderedImages;
}

@property (getter=isAsyncAdjustment, nonatomic) bool asyncAdjustment;
@property (getter=isOnlyChangingOriginalChoice, nonatomic) bool onlyChangingOriginalChoice;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) bool preferHEICForRenderedImages;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAsyncAdjustment;
- (bool)isOnlyChangingOriginalChoice;
- (long long)playbackStyle;
- (bool)preferHEICForRenderedImages;
- (void)setAsyncAdjustment:(bool)arg1;
- (void)setOnlyChangingOriginalChoice:(bool)arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setPreferHEICForRenderedImages:(bool)arg1;

@end
