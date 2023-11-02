
@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource {
    double  _lastUpdate;
    CALayer * _layer;
    double  _nextUpdateDate;
}

@property (nonatomic, retain) CALayer *layer;

- (double)__renderLayer:(void *)arg1 withCARenderer:(void *)arg2 engineContext:(void *)arg3 viewport:(void *)arg4 atTime:(void *)arg5 forceUpdate:(void *)arg6 didUpdate:(void *)arg7; // needs 7 arg types, found 6: id, id, struct __C3DEngineContext { }*, double, bool, bool*
- (double)__renderLayerUsingMetal:(void *)arg1 withCARenderer:(void *)arg2 engineContext:(void *)arg3 viewport:(void *)arg4 atTime:(void *)arg5 forceUpdate:(void *)arg6 didUpdate:(void *)arg7; // needs 7 arg types, found 6: id, id, struct __C3DEngineContext { }*, double, bool, bool*
- (double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(struct __C3DEngineContext { }*)arg3 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg4;
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 updateLayer:(bool)arg3 updateTransform:(bool)arg4 caRenderer:(id)arg5;
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 updateLayer:(bool)arg3 updateTransform:(bool)arg4 caRenderer:(id)arg5 isMainThread:(bool)arg6;
- (struct __C3DTexture { }*)_textureWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 nextFrameTime:(double*)arg3;
- (void)cleanup:(struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; unsigned int x8; struct __C3DTexture {} *x9; struct __C3DStack {} *x10; void *x11; bool x12; bool x13; bool x14; bool x15; bool x16; struct __CFDictionary {} *x17; unsigned int x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_22_1_1; } x22; void *x23; long long x24; struct __C3DFXProgramObject {} *x25; struct __C3DEngineStats { unsigned int x_26_1_1; unsigned int x_26_1_2; unsigned int x_26_1_3; unsigned int x_26_1_4; unsigned int x_26_1_5; unsigned int x_26_1_6; unsigned int x_26_1_7; unsigned int x_26_1_8; unsigned int x_26_1_9; unsigned int x_26_1_10; unsigned int x_26_1_11; unsigned int x_26_1_12; unsigned int x_26_1_13; unsigned int x_26_1_14; unsigned int x_26_1_15; unsigned int x_26_1_16; unsigned int x_26_1_17; unsigned int x_26_1_18; unsigned int x_26_1_19; unsigned int x_26_1_20; unsigned int x_26_1_21; unsigned int x_26_1_22; unsigned int x_26_1_23; unsigned int x_26_1_24; double x_26_1_25; double x_26_1_26; double x_26_1_27; double x_26_1_28; double x_26_1_29; double x_26_1_30; double x_26_1_31; double x_26_1_32; double x_26_1_33; double x_26_1_34; double x_26_1_35; double x_26_1_36; double x_26_1_37; double x_26_1_38; double x_26_1_39; unsigned int x_26_1_40; unsigned int x_26_1_41; unsigned int x_26_1_42; unsigned int x_26_1_43; unsigned int x_26_1_44; unsigned int x_26_1_45; unsigned int x_26_1_46; unsigned int x_26_1_47; } x26; }*)arg1;
- (float)clearValue;
- (void)dealloc;
- (id)layer;
- (double)layerContentsScaleFactor;
- (struct CGSize { double x1; double x2; })layerSizeInPixels;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 nextFrameTime:(double*)arg3 status:(struct { bool x1; bool x2; }*)arg4;
- (bool)prefersGL3;
- (void)renderWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 nextFrameTime:(double*)arg3 status:(struct { bool x1; bool x2; }*)arg4;
- (bool)requiresMainThreadUpdates;
- (void)setLayer:(id)arg1;
- (bool)supportsMetal;
- (struct __C3DTexture { }*)textureWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 nextFrameTime:(double*)arg3;

@end
