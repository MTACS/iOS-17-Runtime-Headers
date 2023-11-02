
@interface PTEffectDescriptor : NSObject <NSCopying> {
    unsigned long long  _activeEffectType;
    bool  _allowSkipOutColorBufferWrite;
    unsigned long long  _availableEffectTypes;
    struct CGSize { 
        double width; 
        double height; 
    }  _colorSize;
    long long  _effectQuality;
    struct CGSize { 
        double width; 
        double height; 
    }  _externalDisparitySize;
    bool  _externalHandDetectionsEnabled;
    bool  _laguna;
    <MTLCommandQueue> * _metalCommandQueue;
    bool  _prewarmOnly;
}

@property unsigned long long activeEffectType;
@property bool allowSkipOutColorBufferWrite;
@property unsigned long long availableEffectTypes;
@property struct CGSize { double x1; double x2; } colorSize;
@property long long effectQuality;
@property struct CGSize { double x1; double x2; } externalDisparitySize;
@property bool externalHandDetectionsEnabled;
@property bool laguna;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property bool prewarmOnly;

- (void).cxx_destruct;
- (unsigned long long)activeEffectType;
- (bool)allowSkipOutColorBufferWrite;
- (unsigned long long)availableEffectTypes;
- (struct CGSize { double x1; double x2; })colorSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)effectQuality;
- (struct CGSize { double x1; double x2; })externalDisparitySize;
- (bool)externalHandDetectionsEnabled;
- (bool)laguna;
- (id)metalCommandQueue;
- (bool)prewarmOnly;
- (void)setActiveEffectType:(unsigned long long)arg1;
- (void)setAllowSkipOutColorBufferWrite:(bool)arg1;
- (void)setAvailableEffectTypes:(unsigned long long)arg1;
- (void)setColorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEffectQuality:(long long)arg1;
- (void)setExternalDisparitySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExternalHandDetectionsEnabled:(bool)arg1;
- (void)setLaguna:(bool)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setPrewarmOnly:(bool)arg1;

@end
