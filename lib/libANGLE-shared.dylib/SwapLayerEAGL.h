
@interface SwapLayerEAGL : CAEAGLLayer {
    bool  initialized;
    EAGLContext * mDisplayContext;
    const void * mFunctions;
    unsigned int  mReadFramebuffer;
    struct SharedSwapState { struct SwapTexture { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned long long x_1_1_4; } x1[3]; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct SwapTexture {} *x3; struct SwapTexture {} *x4; struct SwapTexture {} *x5; } * mSwapState;
}

- (void)display;
- (id)initWithSharedState:(struct SharedSwapState { struct SwapTexture { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned long long x_1_1_4; } x1[3]; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct SwapTexture {} *x3; struct SwapTexture {} *x4; struct SwapTexture {} *x5; }*)arg1 withContext:(id)arg2 withFunctions:(const void*)arg3;

@end
