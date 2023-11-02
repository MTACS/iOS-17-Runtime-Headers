
@interface SearchUIWatchNowCardSection : SFMiniCardSection {
    bool  _isPlaceholder;
}

@property bool isPlaceholder;

+ (id)placeholderCardForMediaContainer:(bool)arg1;

- (bool)isPlaceholder;
- (void)setIsPlaceholder:(bool)arg1;

@end
