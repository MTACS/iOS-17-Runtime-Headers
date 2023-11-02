
@interface AXTapticChimeAsset : NSObject {
    NSString * _audioFilePath;
    NSDictionary * _hapticDictionary;
    double  _prePlayTimeInterval;
    float  _volume;
}

@property (nonatomic, readonly) NSString *audioFilePath;
@property (nonatomic, readonly) NSArray *hapticAtomEntries;
@property (nonatomic, readonly) NSDictionary *hapticDictionary;
@property (nonatomic, readonly) double prePlayTimeInterval;
@property (nonatomic, readonly) float volume;

+ (id)_assetPathForChimeSoundType:(long long)arg1 fileName:(id)arg2;
+ (id)hourAssetForType:(long long)arg1 hour:(unsigned long long)arg2;
+ (id)quarterHourAssetForType:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithChimeSoundType:(long long)arg1 audioFilePath:(id)arg2 hapticsFilePath:(id)arg3;
- (id)audioFilePath;
- (unsigned int)createSystemSoundIDForStartTime:(double)arg1;
- (id)description;
- (id)hapticAtomEntries;
- (id)hapticDictionary;
- (double)prePlayTimeInterval;
- (float)volume;

@end
