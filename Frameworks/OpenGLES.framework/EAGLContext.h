
@interface EAGLContext : NSObject {
    struct _EAGLContextPrivate { id x1; id x2; unsigned long long x3; unsigned int x4; struct __GLIContextRec {} *x5; struct __GLIFunctionDispatchRec { int (*x_6_1_1)(); int (*x_6_1_2)(); int (*x_6_1_3)(); int (*x_6_1_4)(); int (*x_6_1_5)(); int (*x_6_1_6)(); int (*x_6_1_7)(); int (*x_6_1_8)(); int (*x_6_1_9)(); int (*x_6_1_10)(); int (*x_6_1_11)(); int (*x_6_1_12)(); int (*x_6_1_13)(); int (*x_6_1_14)(); int (*x_6_1_15)(); int (*x_6_1_16)(); int (*x_6_1_17)(); int (*x_6_1_18)(); int (*x_6_1_19)(); int (*x_6_1_20)(); int (*x_6_1_21)(); int (*x_6_1_22)(); int (*x_6_1_23)(); int (*x_6_1_24)(); int (*x_6_1_25)(); int (*x_6_1_26)(); int (*x_6_1_27)(); int (*x_6_1_28)(); int (*x_6_1_29)(); int (*x_6_1_30)(); int (*x_6_1_31)(); int (*x_6_1_32)(); int (*x_6_1_33)(); int (*x_6_1_34)(); int (*x_6_1_35)(); int (*x_6_1_36)(); int (*x_6_1_37)(); int (*x_6_1_38)(); int (*x_6_1_39)(); int (*x_6_1_40)(); int (*x_6_1_41)(); int (*x_6_1_42)(); int (*x_6_1_43)(); int (*x_6_1_44)(); int (*x_6_1_45)(); int (*x_6_1_46)(); int (*x_6_1_47)(); int (*x_6_1_48)(); int (*x_6_1_49)(); int (*x_6_1_50)(); int (*x_6_1_51)(); int (*x_6_1_52)(); int (*x_6_1_53)(); int (*x_6_1_54)(); int (*x_6_1_55)(); } x6; } * _private;
    NSString * debugLabel;
}

@property (readonly) unsigned long long API;
@property (nonatomic, copy) NSString *debugLabel;
@property (getter=isMultiThreaded, nonatomic) bool multiThreaded;
@property (readonly) EAGLSharegroup *sharegroup;

// Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES

+ (id)currentContext;
+ (bool)setCurrentContext:(id)arg1;

- (unsigned long long)API;
- (struct EAGLMacroContext { }*)GetMacroContextPrivate;
- (bool)attachImage:(unsigned long long)arg1 toCoreSurface:(struct __IOSurface { }*)arg2 invertedRender:(bool)arg3;
- (id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (void)dealloc;
- (id)debugLabel;
- (struct EAGLMacroContext { }*)getMacroContextPrivate;
- (unsigned long long)getParameter:(unsigned int)arg1 to:(int*)arg2;
- (id)init;
- (id)initWithAPI:(unsigned long long)arg1;
- (id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(bool)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2;
- (bool)isMultiThreaded;
- (bool)presentRenderbuffer:(unsigned long long)arg1;
- (bool)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2;
- (bool)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2;
- (bool)setBlockFence:(id /* block */)arg1 onQueue:(id)arg2;
- (void)setDebugLabel:(id)arg1;
- (void)setMultiThreaded:(bool)arg1;
- (unsigned long long)setParameter:(unsigned int)arg1 to:(int*)arg2;
- (id)sharegroup;
- (bool)texImageIOSurface:(struct __IOSurface { }*)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned int)arg8;
- (bool)texImageIOSurface:(struct __IOSurface { }*)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned int)arg8 invert:(bool)arg9;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)initForBrushes;

@end
