
@interface PGWallpaperAssetGaterResult : NSObject {
    bool  _passesAnyGating;
    bool  _passesSegmentation;
    bool  _passesSettlingEffect;
}

@property (nonatomic, readonly) bool passesAnyGating;
@property (nonatomic) bool passesSegmentation;
@property (nonatomic) bool passesSettlingEffect;

- (unsigned long long)availableFeatures;
- (bool)passesAnyGating;
- (bool)passesSegmentation;
- (bool)passesSettlingEffect;
- (void)setPassesSegmentation:(bool)arg1;
- (void)setPassesSettlingEffect:(bool)arg1;

@end
