
@interface LAUIPKGlyphWrapper : NSObject {
    bool  _fastAnimations;
    NSObject<OS_dispatch_queue> * _glyphQueue;
    UIView<GlyphMethods> * _glyphView;
    bool  _grayedOut;
    bool  _hidden;
    UIView<GlyphMethods> * _idleTouchID;
    UIView * _view;
}

@property (nonatomic) bool fastAnimations;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *glyphQueue;
@property (nonatomic, readonly) UIView<GlyphMethods> *glyphView;
@property (nonatomic) bool grayedOut;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) UIView<GlyphMethods> *idleTouchID;
@property (nonatomic, readonly) UIView *view;

+ (Class)_loadClassFromString:(id)arg1;
+ (void*)_loadPKUI;
+ (id)glyphWithStyle:(long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (double)_minimumAnimationDurationForState:(long long)arg1;
- (bool)fastAnimations;
- (id)glyphQueue;
- (id)glyphView;
- (bool)grayedOut;
- (bool)hidden;
- (id)idleTouchID;
- (id)initWithGlyphView:(id)arg1;
- (void)setFastAnimations:(bool)arg1;
- (void)setGrayedOut:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setState:(long long)arg1 idleTouchID:(bool)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)view;

@end
