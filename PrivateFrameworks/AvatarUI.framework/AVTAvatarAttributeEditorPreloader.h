
@interface AVTAvatarAttributeEditorPreloader : NSObject {
    NSMutableDictionary * _cancelationTokens;
    <AVTUILogger> * _logger;
    AVTPresetResourceLoader * _resourceLoader;
}

@property (nonatomic, retain) NSMutableDictionary *cancelationTokens;
@property (nonatomic, retain) <AVTUILogger> *logger;
@property (nonatomic, retain) AVTPresetResourceLoader *resourceLoader;

- (void).cxx_destruct;
- (void)cancelAllPreloading;
- (void)cancelPreloadForSectionItemIndexPath:(id)arg1;
- (id)cancelationTokens;
- (void)dealloc;
- (id)initWithResourceLoader:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)preloadCategory:(id)arg1;
- (void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2;
- (id)resourceLoader;
- (void)setCancelationTokens:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setResourceLoader:(id)arg1;

@end
