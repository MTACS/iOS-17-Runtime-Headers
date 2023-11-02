
@interface CHRecognizerOptions : NSObject {
    bool  _enableCachingIfAvailable;
    bool  _enableGen2CharacterLMIfAvailable;
    bool  _enableGen2ModelIfAvailable;
}

@property (nonatomic) bool enableCachingIfAvailable;
@property (nonatomic) bool enableGen2CharacterLMIfAvailable;
@property (nonatomic) bool enableGen2ModelIfAvailable;

- (bool)enableCachingIfAvailable;
- (bool)enableGen2CharacterLMIfAvailable;
- (bool)enableGen2ModelIfAvailable;
- (id)init;
- (void)setEnableCachingIfAvailable:(bool)arg1;
- (void)setEnableGen2CharacterLMIfAvailable:(bool)arg1;
- (void)setEnableGen2ModelIfAvailable:(bool)arg1;

@end
