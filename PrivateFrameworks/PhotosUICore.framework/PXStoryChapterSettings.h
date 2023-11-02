
@interface PXStoryChapterSettings : PXSettings {
    long long  _chapterCollectionProducerKind;
    long long  _dummyChaptersCountInterval;
    long long  _dummyChaptersDayInterval;
    bool  _dummyChaptersIncludeSubtitles;
}

@property (nonatomic) long long chapterCollectionProducerKind;
@property (nonatomic) long long dummyChaptersCountInterval;
@property (nonatomic) long long dummyChaptersDayInterval;
@property (nonatomic) bool dummyChaptersIncludeSubtitles;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)chapterCollectionProducerKind;
- (long long)dummyChaptersCountInterval;
- (long long)dummyChaptersDayInterval;
- (bool)dummyChaptersIncludeSubtitles;
- (id)parentSettings;
- (void)setChapterCollectionProducerKind:(long long)arg1;
- (void)setDefaultValues;
- (void)setDummyChaptersCountInterval:(long long)arg1;
- (void)setDummyChaptersDayInterval:(long long)arg1;
- (void)setDummyChaptersIncludeSubtitles:(bool)arg1;

@end
