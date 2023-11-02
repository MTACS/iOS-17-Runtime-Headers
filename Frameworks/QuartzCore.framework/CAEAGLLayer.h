
@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { int x_1_1_1; unsigned int x_1_1_2; int (*x_1_1_3)(); int (*x_1_1_4)(); int (*x_1_1_5)(); int (*x_1_1_6)(); int (*x_1_1_7)(); int (*x_1_1_8)(); int (*x_1_1_9)(); } x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); struct x_list_struct {} *x7; unsigned int x8; unsigned long long x9; struct Atomic { struct { int x_1_2_1; } x_10_1_1; } x10; struct Atomic { struct { int x_1_2_1; } x_11_1_1; } x11; struct SpinLock { struct { int x_1_2_1; } x_12_1_1; } x12; struct _CAImageQueue {} *x13; id x14; double x15; double x16; struct x_list_struct {} *x17; unsigned int x18; struct CAEAGLBuffer {} *x19; struct CAEAGLBuffer {} *x20; unsigned int x21; unsigned int x22; unsigned int x23; struct CAEAGLBuffer {} *x24; id x25; struct Atomic { struct { int x_1_2_1; } x_26_1_1; } x26; unsigned long long x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; } * _win;
}

@property (getter=isAsynchronous) bool asynchronous;
@property (copy) NSDictionary *drawableProperties;
@property double drawableTimeoutSeconds;
@property double inputTime;
@property bool lowLatency;
@property unsigned long long maximumDrawableCount;
@property (readonly) struct _EAGLNativeWindowObject { int x1; unsigned int x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*nativeWindow;
@property bool presentsWithTransaction;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (bool)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(void*)arg1;
- (void)_display;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)discardContents;
- (id)drawableProperties;
- (double)drawableTimeoutSeconds;
- (double)inputTime;
- (bool)isAsynchronous;
- (bool)isDrawableAvailable;
- (bool)isDrawableAvailableInternal;
- (void)layerDidBecomeVisible:(bool)arg1;
- (bool)lowLatency;
- (unsigned long long)maximumDrawableCount;
- (struct _EAGLNativeWindowObject { int x1; unsigned int x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*)nativeWindow;
- (bool)presentsWithTransaction;
- (void)setAsynchronous:(bool)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)setDrawableTimeoutSeconds:(double)arg1;
- (void)setInputTime:(double)arg1;
- (void)setLowLatency:(bool)arg1;
- (void)setMaximumDrawableCount:(unsigned long long)arg1;
- (void)setPresentsWithTransaction:(bool)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;

@end
