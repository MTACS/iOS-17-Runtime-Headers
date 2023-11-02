
@protocol CHRecognizing <NSObject>

@required

- (NSCharacterSet *)activeCharacterSet;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (int)contentType;
- (bool)enableCachingIfAvailable;
- (bool)enableGen2CharacterLMIfAvailable;
- (bool)enableGen2ModelIfAvailable;
- (id)initWithMode:(int)arg1 locale:(NSLocale *)arg2;
- (NSLocale *)locale;
- (unsigned long long)maxRecognitionResultCount;
- (struct CGSize { double x1; double x2; })minimumDrawingSize;
- (int)recognitionMode;
- (void)setActiveCharacterSet:(NSCharacterSet *)arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setContentType:(int)arg1;
- (void)setMaxRecognitionResultCount:(unsigned long long)arg1;
- (void)setMinimumDrawingSize:(struct CGSize { double x1; double x2; })arg1;

@end
