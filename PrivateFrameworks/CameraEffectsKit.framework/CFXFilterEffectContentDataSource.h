
@interface CFXFilterEffectContentDataSource : NSObject <JFXFilterEffectContentDataSource> {
    unsigned long long  _contentAvailability;
    NSString * _contentVersion;
    long long  _inverseToneMapOperator;
    bool  _isContentAvailable;
    bool  _isContentNew;
    NSNumber * _isExpensive;
    bool  _isStyleTransfer;
    NSString * _localizedAccessibilityName;
    NSString * _localizedDisplayName;
    NSNumber * _proxyRenderScale;
    NSNumber * _requiredProVideoVersion;
}

@property (nonatomic) unsigned long long contentAvailability;
@property (nonatomic, retain) NSString *contentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inverseToneMapOperator;
@property (nonatomic) bool isContentAvailable;
@property (nonatomic) bool isContentNew;
@property (nonatomic, retain) NSNumber *isExpensive;
@property (nonatomic) bool isStyleTransfer;
@property (nonatomic, retain) NSString *localizedAccessibilityName;
@property (nonatomic, retain) NSString *localizedDisplayName;
@property (nonatomic, retain) NSNumber *proxyRenderScale;
@property (nonatomic, retain) NSNumber *requiredProVideoVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)contentAvailability;
- (id)contentVersion;
- (id)initWithEffectID:(id)arg1;
- (long long)inverseToneMapOperator;
- (bool)isContentAvailable;
- (bool)isContentNew;
- (id)isExpensive;
- (bool)isStyleTransfer;
- (id)localizedAccessibilityName;
- (id)localizedDisplayName;
- (id)proxyRenderScale;
- (id)requiredProVideoVersion;
- (void)setContentAvailability:(unsigned long long)arg1;
- (void)setContentVersion:(id)arg1;
- (void)setInverseToneMapOperator:(long long)arg1;
- (void)setIsContentAvailable:(bool)arg1;
- (void)setIsContentNew:(bool)arg1;
- (void)setIsExpensive:(id)arg1;
- (void)setIsStyleTransfer:(bool)arg1;
- (void)setLocalizedAccessibilityName:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setProxyRenderScale:(id)arg1;
- (void)setRequiredProVideoVersion:(id)arg1;

@end
