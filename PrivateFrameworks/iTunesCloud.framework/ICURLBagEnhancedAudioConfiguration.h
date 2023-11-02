
@interface ICURLBagEnhancedAudioConfiguration : NSObject {
    NSDictionary * _bagEnhancedAudioDictionary;
}

@property (nonatomic, copy) NSDictionary *bagEnhancedAudioDictionary;
@property (nonatomic, readonly, copy) NSURL *certificateURL;
@property (nonatomic, readonly, copy) NSURL *keyServerURL;
@property (nonatomic, readonly, copy) NSArray *prefetchSKDs;

- (void).cxx_destruct;
- (id)_urlForBagEnhancedAudioKey:(id)arg1;
- (id)bagEnhancedAudioDictionary;
- (id)certificateURL;
- (id)initWithBagEnhancedAudioDictionary:(id)arg1;
- (id)keyServerURL;
- (id)prefetchSKDs;
- (void)setBagEnhancedAudioDictionary:(id)arg1;

@end
