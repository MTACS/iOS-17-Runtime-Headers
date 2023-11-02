
@interface MTImageAnalyzer : MTSingleton {
    NSCache * _memoryCache;
}

- (void).cxx_destruct;
- (id)addImage:(id)arg1 forKey:(id)arg2;
- (id)colorThemeForArtwork:(id)arg1;
- (id)colorThemeForPodcastUuid:(id)arg1;
- (id)init;

@end
