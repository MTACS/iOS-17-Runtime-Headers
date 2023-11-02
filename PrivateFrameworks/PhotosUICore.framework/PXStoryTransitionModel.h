
@interface PXStoryTransitionModel : NSObject {
    long long  _capacity;
    struct { long long x1; struct { long long x_2_1_1; long long x_2_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_2_1_3; unsigned long long x_2_1_4; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_5_2_1; struct { long long x_2_3_1; int x_2_3_2; unsigned int x_2_3_3; long long x_2_3_4; } x_5_2_2; struct { long long x_3_3_1; int x_3_3_2; unsigned int x_3_3_3; long long x_3_3_4; } x_5_2_3; struct { struct { long long x_1_4_1; int x_1_4_2; unsigned int x_1_4_3; long long x_1_4_4; } x_4_3_1; long long x_4_3_2; } x_5_2_4; BOOL x_5_2_5; } x_2_1_5; long long x_2_1_6; struct { struct CGSize { double x_1_3_1; double x_1_3_2; } x_7_2_1; struct CGRect { struct CGPoint { double x_1_4_1; double x_1_4_2; } x_2_3_1; struct CGSize { double x_2_4_1; double x_2_4_2; } x_2_3_2; } x_7_2_2; struct CGRect { struct CGPoint { double x_1_4_1; double x_1_4_2; } x_3_3_1; struct CGSize { double x_2_4_1; double x_2_4_2; } x_3_3_2; } x_7_2_3; struct CGRect { struct CGPoint { double x_1_4_1; double x_1_4_2; } x_4_3_1; struct CGSize { double x_2_4_1; double x_2_4_2; } x_4_3_2; } x_7_2_4; struct CGRect { struct CGPoint { double x_1_4_1; double x_1_4_2; } x_5_3_1; struct CGSize { double x_2_4_1; double x_2_4_2; } x_5_3_2; } x_7_2_5; } x_2_1_7; } x2; } * _clipInfos;
    long long  _count;
    struct { 
        long long numberOfClips; 
        bool clipFramesExtendToBounds; 
        long long mainDividerAxis; 
        double mainDividerSplitRatio; 
        long long numberOfAssets; 
    }  _orderInCompositionInfo;
    struct { 
        long long numberOfClips; 
        bool clipFramesExtendToBounds; 
        long long mainDividerAxis; 
        double mainDividerSplitRatio; 
        long long numberOfAssets; 
    }  _orderOutCompositionInfo;
    struct { 
        long long fromSegmentIdentifier; 
        long long toSegmentIdentifier; 
    }  _segmentTransitionInfo;
    struct { 
        BOOL orderOutTransition; 
        unsigned char options; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
        BOOL fallbackFromTransitionKind; 
        union { 
            BOOL panDirection; 
            BOOL scaleDirection; 
            BOOL rotateDirection; 
            BOOL wipeKind; 
        } ; 
        union { 
            double scaleRelativeFactor; 
            double rotateAngleInDegrees; 
            BOOL wipeFirstAssetDirection; 
        } ; 
    }  _transitionInfo;
}

@property (nonatomic, readonly) struct { long long x1; bool x2; long long x3; double x4; long long x5; } orderInCompositionInfo;
@property (nonatomic, readonly) struct { long long x1; bool x2; long long x3; double x4; long long x5; } orderOutCompositionInfo;
@property (nonatomic, readonly) struct { long long x1; long long x2; } segmentTransitionInfo;
@property (nonatomic, readonly) struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; } transitionInfo;

- (void)addClipWithIdentifier:(long long)arg1 info:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })arg2 event:(long long)arg3;
- (void)dealloc;
- (void)enumerateClipIdentifiersUsingBlock:(id /* block */)arg1;
- (id)initWithSegmentTransitionInfo:(struct { long long x1; long long x2; })arg1 orderOutCompositionInfo:(struct { long long x1; bool x2; long long x3; double x4; long long x5; })arg2 orderInCompositionInfo:(struct { long long x1; bool x2; long long x3; double x4; long long x5; })arg3 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg4;
- (struct { long long x1; bool x2; long long x3; double x4; long long x5; })orderInCompositionInfo;
- (struct { long long x1; bool x2; long long x3; double x4; long long x5; })orderOutCompositionInfo;
- (struct { long long x1; long long x2; })segmentTransitionInfo;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfo;

@end
