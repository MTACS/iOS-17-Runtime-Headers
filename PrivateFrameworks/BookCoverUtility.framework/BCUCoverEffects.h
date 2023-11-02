
@interface BCUCoverEffects : NSObject {
    NSArray * _bookCoverEffectFilters;
    unsigned long long  _mode;
    BCULayerRenderer * _renderer;
    NSArray * _seriesCoverEffectFilters;
    NSArray * _templateImageFilters;
}

@property (nonatomic, readonly) NSArray *bookCoverEffectFilters;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) NSArray *seriesCoverEffectFilters;
@property (nonatomic, readonly) NSArray *templateImageFilters;
@property (nonatomic, readonly) NSArray *templateImageSetFilters;

+ (id)_effectIdentifierForEffectIndex:(unsigned long long)arg1;
+ (id)effectIdentifierForAsset:(id)arg1 withEnvironment:(id)arg2;
+ (id)effectIdentifierForFilterInfo:(id)arg1;
+ (id)effectIdentifierWithRTL:(bool)arg1 style:(unsigned long long)arg2 content:(unsigned long long)arg3 nightMode:(bool)arg4;
+ (struct CGImage { }*)restrictedImageFrom:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)bookCoverEffectFilterForEffectIdentifier:(id)arg1;
- (id)bookCoverEffectFilters;
- (id)initWithRenderer:(id)arg1;
- (id)initWithRenderer:(id)arg1 mode:(unsigned long long)arg2;
- (unsigned long long)mode;
- (id)seriesCoverEffectFilters;
- (id)templateImageFilters;
- (id)templateImageSetFilters;

@end
