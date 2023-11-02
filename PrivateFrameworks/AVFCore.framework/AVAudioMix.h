
@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal * _audioMix;
}

@property (nonatomic, readonly, copy) NSArray *inputParameters;

- (id)audioMixInputParametersForTrackID:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)inputParameters;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setInputParameters:(id)arg1;

@end
