
@interface SFSSTTSEngineFactory : NSObject {
    NSMutableDictionary * _keyToTTSEngineMap;
}

@property (nonatomic, retain) NSMutableDictionary *keyToTTSEngineMap;

+ (id)getKeyByVoiceAsset:(id)arg1 resourceAsset:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2;
- (id)init;
- (id)keyToTTSEngineMap;
- (void)removeAllEngines;
- (void)removeEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2;
- (void)setKeyToTTSEngineMap:(id)arg1;

@end
