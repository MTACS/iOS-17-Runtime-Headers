
@interface PKDynamicLayerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    PKDynamicLayerEmitterConfiguration * _backgroundParallaxEmitter;
    PKDynamicLayerCrossDissolveConfiguration * _crossDissolve;
    PKDynamicLayerEmitterConfiguration * _foregroundParallaxEmitter;
    PKDynamicLayerEmitterConfiguration * _neutralEmitter;
    bool  _parallaxEnabled;
    PKDynamicLayerEmitterConfiguration * _staticOverlayEmitter;
    bool  _supported;
    PKDynamicLayerTransactionEffectConfiguration * _transactionEffect;
    unsigned long long  _version;
}

@property (nonatomic, retain) PKDynamicLayerEmitterConfiguration *backgroundParallaxEmitter;
@property (nonatomic, retain) PKDynamicLayerCrossDissolveConfiguration *crossDissolve;
@property (nonatomic, retain) PKDynamicLayerEmitterConfiguration *foregroundParallaxEmitter;
@property (nonatomic, retain) PKDynamicLayerEmitterConfiguration *neutralEmitter;
@property (nonatomic) bool parallaxEnabled;
@property (nonatomic, retain) PKDynamicLayerEmitterConfiguration *staticOverlayEmitter;
@property (getter=isSupported, nonatomic) bool supported;
@property (nonatomic, retain) PKDynamicLayerTransactionEffectConfiguration *transactionEffect;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundParallaxEmitter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossDissolve;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundParallaxEmitter;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isSupported;
- (id)neutralEmitter;
- (bool)parallaxEnabled;
- (void)setBackgroundParallaxEmitter:(id)arg1;
- (void)setCrossDissolve:(id)arg1;
- (void)setForegroundParallaxEmitter:(id)arg1;
- (void)setNeutralEmitter:(id)arg1;
- (void)setParallaxEnabled:(bool)arg1;
- (void)setStaticOverlayEmitter:(id)arg1;
- (void)setSupported:(bool)arg1;
- (void)setTransactionEffect:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)staticOverlayEmitter;
- (id)transactionEffect;
- (unsigned long long)version;

@end
