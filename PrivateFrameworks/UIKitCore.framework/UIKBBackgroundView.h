
@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    bool  _centerFilled;
    NSObject * _geometryCacheKey;
    bool  _hasCandidateKeys;
    UITextInputTraits * _inputTraits;
    bool  _isSplit;
    UIKBTree * _keyplane;
    UIKBRenderConfig * _renderConfig;
    UIKBScreenTraits * _screenTraits;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitLeftCacheRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitLeftRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitRightCacheRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitRightRect;
    unsigned long long  _topCorners;
    int  _visualStyle;
}

@property (nonatomic, readonly) long long assetIdiom;
@property (nonatomic, readonly) long long cacheDeferPriority;
@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) double cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject *geometryCacheKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) UIKBScreenTraits *screenTraits;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canDrawContent;
- (long long)assetIdiom;
- (bool)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)geometryCacheKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)keepNonPersistent;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;
- (id)renderConfig;
- (id)screenTraits;
- (void)setGeometryCacheKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setScreenTraits:(id)arg1;

@end
