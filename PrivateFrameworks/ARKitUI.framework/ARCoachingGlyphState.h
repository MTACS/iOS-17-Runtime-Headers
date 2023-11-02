
@interface ARCoachingGlyphState : NSObject {
    void _bottomPlaneTranslationTarget;
    <ARCoachingGlyphStateDelegate> * _delegate;
    bool  _isVertical;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _quaternionTarget;
    void _scaleTarget;
    unsigned long long  _snapState;
    void _topPlaneTranslationTarget;
}

@property (nonatomic, readonly) void bottomPlaneTranslationTarget;
@property (nonatomic) <ARCoachingGlyphStateDelegate> *delegate;
@property (nonatomic) bool isVertical;
@property (nonatomic, readonly) struct { } quaternionTarget;
@property (nonatomic, readonly) void scaleTarget;
@property (nonatomic) unsigned long long snapState;
@property (nonatomic, readonly) void topPlaneTranslationTarget;

- (void).cxx_destruct;
- (void)bottomPlaneTranslationTarget;
- (void)computeBottomPlaneTranslationTarget;
- (struct { })computeQuaternionTarget;
- (void)computeScaleTarget;
- (void)computeTopPlaneTranslationTarget;
- (id)delegate;
- (id)init;
- (bool)isVertical;
- (struct { })quaternionTarget;
- (void)scaleTarget;
- (void)setBottomPlaneTranslationTarget;
- (void)setDelegate:(id)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setQuaternionTarget:(struct { })arg1;
- (void)setScaleTarget;
- (void)setSnapState:(unsigned long long)arg1;
- (void)setTopPlaneTranslationTarget;
- (unsigned long long)snapState;
- (void)topPlaneTranslationTarget;

@end
