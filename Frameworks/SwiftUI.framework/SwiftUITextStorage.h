
@interface SwiftUITextStorage : NSConcreteTextStorage {
    double  _baselineDelta;
    double  _defaultTighteningFactor;
    bool  _forceWordWrapping;
    bool  _wrappedByCluster;
}

@property (setter=_setBaselineDelta:, nonatomic) double _baselineDelta;
@property (setter=_setForceWordWrapping:, nonatomic) bool _forceWordWrapping;
@property (setter=_setWrappedByCluster:, nonatomic) bool _wrappedByCluster;
@property (nonatomic) double defaultTighteningFactor;

- (double)_baselineDelta;
- (bool)_baselineMode;
- (bool)_forceWordWrapping;
- (bool)_isStringDrawingTextStorage;
- (void)_setBaselineDelta:(double)arg1;
- (void)_setForceWordWrapping:(bool)arg1;
- (void)_setWrappedByCluster:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (bool)_wrappedByCluster;
- (double)defaultTighteningFactor;
- (void)setDefaultTighteningFactor:(double)arg1;

@end
