
@interface CHRemoteRecognizer : NSObject <CHRecognizing> {
    NSXPCConnection * __connection;
    NSDictionary * _activeCharacterSetPerLocale;
    int  _autoCapitalizationMode;
    int  _autoCorrectionMode;
    int  _baseWritingDirection;
    int  _contentType;
    bool  _enableCachingIfAvailable;
    bool  _enableGen2CharacterLMIfAvailable;
    bool  _enableGen2ModelIfAvailable;
    NSArray * _locales;
    unsigned long long  _maxRecognitionResultCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumDrawingSize;
    long long  _priority;
    int  _recognitionMode;
    bool  _shouldUseStrokeReordering;
    bool  _shouldUseTextReplacements;
}

@property (nonatomic, retain) NSCharacterSet *activeCharacterSet;
@property (nonatomic, readonly, copy) NSDictionary *activeCharacterSetPerLocale;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (nonatomic) int contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enableCachingIfAvailable;
@property (nonatomic, readonly) bool enableGen2CharacterLMIfAvailable;
@property (nonatomic, readonly) bool enableGen2ModelIfAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly, copy) NSArray *locales;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumDrawingSize;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) int recognitionMode;
@property (nonatomic) bool shouldUseTextReplacements;
@property (readonly) Class superclass;

+ (long long)absoluteMaxStrokeCountPerRequest;
+ (long long)maxRequestStrokeCountForLocale:(id)arg1;
+ (id)newRemoteRecognizerWithMode:(int)arg1 locales:(id)arg2;

- (void).cxx_destruct;
- (id)activeCharacterSet;
- (id)activeCharacterSetPerLocale;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (int)contentType;
- (void)dealloc;
- (bool)enableCachingIfAvailable;
- (bool)enableGen2CharacterLMIfAvailable;
- (bool)enableGen2ModelIfAvailable;
- (unsigned long long)hash;
- (id)initWithMode:(int)arg1 locale:(id)arg2;
- (id)initWithMode:(int)arg1 locale:(id)arg2 recognizerOptions:(id)arg3;
- (id)initWithMode:(int)arg1 locales:(id)arg2 activeCharacterSetPerLocale:(id)arg3 recognizerOptions:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)locales;
- (unsigned long long)maxRecognitionResultCount;
- (struct CGSize { double x1; double x2; })minimumDrawingSize;
- (long long)priority;
- (int)recognitionMode;
- (void)setActiveCharacterSet:(id)arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setContentType:(int)arg1;
- (void)setMaxRecognitionResultCount:(unsigned long long)arg1;
- (void)setMinimumDrawingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPriority:(long long)arg1;
- (void)setShouldUseTextReplacements:(bool)arg1;
- (bool)shouldUseTextReplacements;
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)transcriptionPathsForTokenizedTextResult:(id)arg1 withHistory:(id)arg2 scores:(id*)arg3 error:(id*)arg4;

@end
