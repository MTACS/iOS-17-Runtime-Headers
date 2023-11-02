
@interface PGMusicFeatureExtractionContext : NSObject {
    void configuration;
    void photoLibrary;
    void songKeywordProvider;
    void useMoodKeywords;
}

@property (nonatomic, readonly) bool useMoodKeywords;

+ (id)appleMusicFeatureExtractionContextWithCuratorContext:(id)arg1;
+ (id)flexMusicFeatureExtractionContextWithCuratorContext:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (bool)useMoodKeywords;

@end
