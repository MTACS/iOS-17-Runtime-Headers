
@interface AVPlaybackRate : AVPlaybackSpeed

@property (nonatomic, readonly, copy) NSString *compactLocalizedName;

- (id)compactLocalizedName;
- (id)initWithRate:(double)arg1 localizedName:(id)arg2 compactLocalizedName:(id)arg3;
- (id)initWithRate:(double)arg1 localizedName:(id)arg2 compactLocalizedName:(id)arg3 symbolImage:(id)arg4;

@end
