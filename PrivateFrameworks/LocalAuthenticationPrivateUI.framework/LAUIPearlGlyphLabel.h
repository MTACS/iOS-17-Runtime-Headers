
@interface LAUIPearlGlyphLabel : UIView {
    bool  _allowDelayedVisibility;
    bool  _animated;
    CABackdropLayer * _background;
    UIColor * _backgroundColor;
    UIFont * _baseFont;
    UIView * _container;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLabelSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentMaximumSize;
    LAUIPearlGlyphView * _glyph;
    UIView * _glyphContainer;
    bool  _inWindow;
    UILabel * _label;
    UIView * _labelContainer;
    /* Warning: unhandled struct encoding: '{vector<UIView *, std::allocator<UIView *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<UIView *__strong *, std::allocator<UIView *>>="__value_"^@}}' */ struct vector<UIView *, std::allocator<UIView *>> { 
        __end_ **__begin_; 
    }  _labelSnapshots;
    struct map<CALayer *__unsafe_unretained, CALayer *, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, CALayer *>>> { 
        struct __tree<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, CALayer *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _masks;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    bool  _reduceBlur;
    bool  _shimmerEnabled;
    long long  _style;
    NSString * _text;
    UIColor * _textColor;
    bool  _textNeedsUpdate;
    bool  _textUpdateNeedsAnimation;
    NSObject<OS_dispatch_source> * _visibilityTimer;
    bool  _visible;
    bool  _visibleNeedsUpdate;
}

@property (nonatomic) bool inApplicationContext;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (getter=isShimmerEnabled, nonatomic, readonly) bool shimmerEnabled;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) NSString *text;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyStyle;
- (void)_applyVisibilityAnimated:(bool)arg1;
- (void)_updateBoundsSizeAnimated:(bool)arg1;
- (void)_updateFontAnimated:(bool)arg1;
- (void)_updateGlyphPaused;
- (void)_updateReduceBlurState;
- (void)_updateText;
- (void)_updateVisibilityAnimated:(bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)inApplicationContext;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)invalidate;
- (bool)isShimmerEnabled;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maximumSize;
- (void)reduceMotionDidChange:(id)arg1;
- (void)reduceTransparencyDidChange:(id)arg1;
- (void)setInApplicationContext:(bool)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setShimmerEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)setText:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)text;

@end
