
@interface SiriTTSService_TTSAXResourceManager : NSObject {
    NSArray * _allCompactResources;
    TTSAXResourceManager * _axManager;
}

@property (nonatomic, retain) NSArray *allCompactResources;
@property (nonatomic, retain) TTSAXResourceManager *axManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allCompactResources;
- (id)axManager;
- (id)init;
- (void)setAllCompactResources:(id)arg1;
- (void)setAxManager:(id)arg1;

@end
