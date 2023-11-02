
@interface CIRedEyeRepair3 : NSObject {
    struct { 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } FR; 
        struct CGPoint { 
            double x; 
            double y; 
        } leftEye; 
        struct CGPoint { 
            double x; 
            double y; 
        } rightEye; 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } LR; 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } RR; 
        float leftDistMatrix[4]; 
        float rightDistMatrix[4]; 
        struct CGPoint { 
            double x; 
            double y; 
        } LPoly[8]; 
        struct CGPoint { 
            double x; 
            double y; 
        } RPoly[8]; 
        float IOD; 
    }  FC;
    struct { 
        double variance; 
        int nNonZero; 
    }  FS;
    struct { 
        int width; 
        int height; 
        float scaleFactor; 
        struct { /* ? */ } *grid; 
        int nPoints; 
        int maxPoints; 
        struct { /* ? */ } *points; 
        int nextNetNumber; 
        int nThreads; 
        int maxThreads; 
        struct { /* ? */ } *threads; 
        int nShapes; 
        int maxShapes; 
        struct { /* ? */ } *shapes; 
    }  G;
    struct { 
        float skinval; 
        float avgLuminance; 
        float minLuminance; 
        float maxLuminance; 
        float darkPercent; 
        float clipPercent; 
    }  M;
    struct { 
        int width; 
        int height; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } T; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } Tp; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } O; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } OO; 
        bool computeEyePolygon; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } EP; 
        bool maskRender; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } D; 
        bool computeGradient; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } G; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } M; 
        bool computeShine; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } S; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } P; 
    }  PB;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  ROIRect;
    struct { 
        float xf; 
        float yf; 
        float xfi; 
        float yfi; 
        float ify; 
        int ioffx; 
        int ioffy; 
        int downsampleType; 
        float downsampleOversizeX; 
        float downsampleOversizeY; 
        int gradientChannel; 
        int edgeFindingChannel; 
        float minMagnitude; 
        float regressionRadius; 
        float capture; 
        float alignmentTolerance; 
        float connectThreshold; 
        bool forceFail; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } inputImageExtent; 
        int orientation; 
        int cameraType; 
        int faceIndex; 
        int side; 
        float scale; 
        float IOD; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        int height; 
    }  S;
    float  avgLuminance;
    int  erError;
    NSArray * faceArray;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  faceBitmap;
    NSMutableArray * failureCauses;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  fullBitmap;
    <RedEyeInspector3> * inspector;
    int  ioffx;
    int  ioffy;
    float  maxLuminance;
    float  minLuminance;
    int  printFaceArrayLevel;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  repairMap;
    struct { 
        int minrow; 
        int maxrow; 
        int mincol; 
        int maxcol; 
    }  repairRect;
    NSMutableArray * repairs;
    float  skinval;
    struct { 
        int minrow; 
        int maxrow; 
        int mincol; 
        int maxcol; 
    }  subRectangle;
}

+ (int)bitmapRect:(struct { int x1; int x2; int x3; int x4; }*)arg1 point:(struct CGPoint { double x1; double x2; }*)arg2 polygon:(struct CGPoint { double x1; double x2; })arg3 andDistMatrix:(float)arg4 forEye:(int)arg5 inFaceDictionary:(id)arg6 settings:(struct { float x1; float x2; float x3; float x4; float x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; float x13; float x14; float x15; float x16; float x17; bool x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; int x20; int x21; int x22; int x23; float x24; float x25; struct CGAffineTransform { double x_26_1_1; double x_26_1_2; double x_26_1_3; double x_26_1_4; double x_26_1_5; double x_26_1_6; } x26; int x27; }*)arg7;
+ (struct { int x1; int x2; int x3; int x4; })bitmapRectWithImageSubRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(struct { float x1; float x2; float x3; float x4; float x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; float x13; float x14; float x15; float x16; float x17; bool x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; int x20; int x21; int x22; int x23; float x24; float x25; struct CGAffineTransform { double x_26_1_1; double x_26_1_2; double x_26_1_3; double x_26_1_4; double x_26_1_5; double x_26_1_6; } x26; int x27; }*)arg2;
+ (int)faceContext:(struct { struct { int x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; float x6[4]; float x7[4]; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8[8]; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9[8]; float x10; }*)arg1 withFaceArray:(id)arg2 index:(int)arg3 settings:(struct { float x1; float x2; float x3; float x4; float x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; float x13; float x14; float x15; float x16; float x17; bool x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; int x20; int x21; int x22; int x23; float x24; float x25; struct CGAffineTransform { double x_26_1_1; double x_26_1_2; double x_26_1_3; double x_26_1_4; double x_26_1_5; double x_26_1_6; } x26; int x27; }*)arg4;
+ (void)insertIntoConnectionHopper:(struct { int x1; struct { int x_2_1_1; int x_2_1_2; int x_2_1_3; int x_2_1_4; float x_2_1_5; } x2[20]; }*)arg1 index1:(int)arg2 drop1:(int)arg3 index2:(int)arg4 drop2:(int)arg5 score:(float)arg6;
+ (void)insertIntoThreadHopper:(struct { int x1; struct { int x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; } x2[20]; }*)arg1 index:(int)arg2 recChannel:(float)arg3 hue:(float)arg4 saturation:(float)arg5 luminance:(float)arg6 shapeMetricTotal:(float)arg7 xPosition:(float)arg8;
+ (struct { float x1; float x2; float x3; float x4; float x5; int x6; int x7; int x8; float x9; float x10; int x11; int x12; float x13; float x14; float x15; float x16; float x17; bool x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; int x20; int x21; int x22; int x23; float x24; float x25; struct CGAffineTransform { double x_26_1_1; double x_26_1_2; double x_26_1_3; double x_26_1_4; double x_26_1_5; double x_26_1_6; } x26; int x27; })settingsWithOptions:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (float)yawAngleWithFaceDictionary:(id)arg1;

- (struct { float x1; float x2; float x3; float x4; })RGBtoHSV:(struct { float x1; float x2; float x3; float x4; })arg1;
- (int)addPoint:(struct CGPoint { double x1; double x2; })arg1 toHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg2;
- (int)addPoint:(struct CGPoint { double x1; double x2; })arg1 toShapePoints:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg2;
- (int)analyzeMask:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 usingConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg2 producingOptimizedMask:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3;
- (int)attemptClosureOfThreadIndex:(int)arg1;
- (void)autoRepairWithFaceArray:(id)arg1;
- (struct CGPoint { double x1; double x2; })bitmapPointWithDictionaryPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })bitmapPointWithDictionaryPointArray:(id)arg1;
- (struct { int x1; int x2; int x3; int x4; })bitmapRectWithDictionaryRectArray:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroidWithConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (int)closeThreadIndex:(int)arg1 usingVectorField:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2;
- (int)color:(struct { float x1; float x2; float x3; float x4; }*)arg1 underConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg2 saturated:(struct { float x1; float x2; float x3; float x4; }*)arg3;
- (void)computeLengthsAnglesAndDeltaAnglesForShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1;
- (void)condenseFourChannelRecognitionMap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 intoOneChanneMap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2;
- (int)connectThreads:(int)arg1 drop1:(int)arg2 and:(int)arg3 drop2:(int)arg4;
- (int)connectThreadsInGrid;
- (int)convexHull:(struct { /* ? */ }**)arg1 ofOriented:(bool)arg2 shape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg3;
- (int)convexHull:(struct { /* ? */ }**)arg1 ofOriented:(bool)arg2 threadIndex:(int)arg3;
- (int)copyGridInto:(struct { int x1; int x2; float x3; struct { /* ? */ } *x4; int x5; int x6; struct { /* ? */ } *x7; int x8; int x9; int x10; struct { /* ? */ } *x11; int x12; int x13; struct { /* ? */ } *x14; }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 height:(int)arg3;
- (int)copyShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1 into:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 height:(int)arg4;
- (void)dealloc;
- (id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })dictionaryPointWithBitmapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })dictionaryPointWithGlobalBitmapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dictionaryRectArrayWithBitmapRect:(struct { int x1; int x2; int x3; int x4; })arg1;
- (id)dictionaryRectArrayWithGlobalBitmapRect:(struct { int x1; int x2; int x3; int x4; })arg1;
- (bool)edgePoint:(struct CGPoint { double x1; double x2; }*)arg1 withBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 center:(struct CGPoint { double x1; double x2; })arg3 perp:(struct CGPoint { double x1; double x2; })arg4;
- (void)executeRepair:(id)arg1;
- (int)executeRepairWithRepairDictionary:(id)arg1;
- (int)findThreadsInGrid;
- (struct { double x1; int x2; })focusStatsWithBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 IOD:(float)arg2;
- (void)forAllGridPointsNear:(int)arg1 withinRadius:(float)arg2 do:(int (*)arg3 context:(void*)arg4;
- (void)forAllGridThreadsNear:(struct CGPoint { double x1; double x2; })arg1 withinRadius:(float)arg2 do:(int (*)arg3 context:(void*)arg4;
- (bool)gatherFaceStatistics:(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (int)gatherThreadInfo:(struct { int x1; int x2; int x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; int x10; int x11; float x12; float x13; float x14; float x15; struct { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; } x16; struct { float x_17_1_1; float x_17_1_2; float x_17_1_3; float x_17_1_4; } x17; float x18; int x19; int x20; }*)arg1;
- (struct CGPoint { double x1; double x2; })globalBitmapPointWithDictionaryPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })globalBitmapPointWithDictionaryPointArray:(id)arg1;
- (struct { int x1; int x2; int x3; int x4; })globalBitmapRectWithDictionaryRectArray:(id)arg1;
- (bool)hopperElement:(struct { int x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg1 isMoreScleraThanElement:(struct { int x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2;
- (int)improvedShape:(struct { /* ? */ }**)arg1 withShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg2;
- (void)initBitmaps;
- (bool)initGridWithBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 scale:(int)arg2;
- (int)initHull:(struct { /* ? */ }**)arg1 withOrientation:(bool)arg2;
- (int)initShapePoints:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1 withMaxPoints:(int)arg2;
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;
- (int)insertPoint:(struct CGPoint { double x1; double x2; })arg1 andDirection:(struct CGPoint { double x1; double x2; })arg2 intoGrid:(bool)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inverseImageTransformForOrientation:(int)arg1;
- (bool)isBlurryWithFocusStats:(struct { double x1; int x2; })arg1;
- (bool)isConvex:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (struct CGPoint { double x1; double x2; })leftHandedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 ofPoint:(struct CGPoint { double x1; double x2; })arg2;
- (int)linkUpPointIndex:(int)arg1 toPointIndex:(int)arg2;
- (int)lookForPoint:(struct CGPoint { double x1; double x2; }*)arg1 onLine:(struct { float x1; float x2; float x3; })arg2 nearestPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)magnitudeMap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 fromGabor:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2;
- (void)measureHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1 majorAxis:(struct CGPoint { double x1; double x2; }*)arg2 majorTo:(struct CGPoint { double x1; double x2; }*)arg3 majorDiameter:(float*)arg4 minorAxis:(struct CGPoint { double x1; double x2; }*)arg5 minorTo:(struct CGPoint { double x1; double x2; }*)arg6 minorDiameter:(float*)arg7;
- (id)mutableCopyOfArray:(id)arg1;
- (int)newShape:(struct { /* ? */ }**)arg1;
- (int)newShape:(struct { /* ? */ }**)arg1 byInterpolatingBetweenCheckpoints:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; int x2; float x3; })arg2 nc:(int)arg3 usingVectorField:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg4;
- (int)newThread:(struct { /* ? */ }**)arg1;
- (double)next12BitRandom;
- (int)nextPointIndexWithPointIndex:(int)arg1;
- (bool)openRepairDictionary:(id)arg1 convexHull:(struct { /* ? */ }**)arg2 facts:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg3;
- (int)packGlobalRepairDictionary:(id*)arg1 withConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg2 facts:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg3;
- (void)point:(struct CGPoint { double x1; double x2; })arg1 toGridRow:(int*)arg2 column:(int*)arg3;
- (int)prepareBitmapsWithString:(char *)arg1;
- (int)prepareMasksWithConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (int)prepareTransformWithEyeIndex:(int)arg1;
- (void)printConnectionHopper:(struct { int x1; struct { int x_2_1_1; int x_2_1_2; int x_2_1_3; int x_2_1_4; float x_2_1_5; } x2[20]; }*)arg1 message:(char *)arg2;
- (void)printFaceArray;
- (void)printThreadWithIndex:(int)arg1;
- (void)printThreadsOnlyClosed:(bool)arg1 message:(char *)arg2;
- (int)prominenceConvexHull:(struct { /* ? */ }**)arg1 facts:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg2;
- (void)putThreadAtIndex:(int)arg1;
- (int)recognizeThreadsWinningThreadIndex:(int*)arg1 info:(struct { float x1; float x2; float x3; float x4; }*)arg2;
- (void)regressionWithPointIndex:(int)arg1;
- (void)removeRedundantPointsFromShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1 closerThan:(float)arg2;
- (void)removeSmallBumpsFromShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1 center:(struct CGPoint { double x1; double x2; })arg2 threshold:(float)arg3;
- (void)removeSpikesFromShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1;
- (void)removeThreadAtIndex:(int)arg1;
- (int)renderConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1 distance:(float)arg2 fieldToBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3;
- (int)renderEyePolygonToBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1;
- (int)renderHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1 toBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2;
- (id)repairArray;
- (int)repairDictionary:(id*)arg1 withEyeIndex:(int)arg2;
- (void)repairExternalBuffer;
- (struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)repairMap;
- (struct { int x1; int x2; int x3; int x4; })repairRect;
- (id)repairWithSide:(int)arg1;
- (int)replacePointAndDirection:(int)arg1;
- (int)saveRepairDictionary:(id*)arg1 withConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg2 facts:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg3;
- (void)setInspector:(id)arg1;
- (int)shape:(struct { /* ? */ }**)arg1 withThreadAtIndex:(int)arg2 centroid:(struct CGPoint { double x1; double x2; })arg3;
- (void)slidingWindowAnalysisOfShape:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1 into:(struct { float x1[4]; float x2[4]; float x3[4]; int x4[4]; }*)arg2;
- (void)start12BitRandom:(int)arg1;
- (id)stringWithRER3Error:(int)arg1;
- (void)swapHopperElement:(struct { int x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg1 withElement:(struct { int x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2;
- (void)termBitmaps;
- (void)termGrid;
- (void)termHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (void)termShapePoints:(struct { int x1; int x2; struct { /* ? */ } *x3; int x4; int x5; int x6; }*)arg1;
- (struct CGPoint { double x1; double x2; })threadCentroid:(struct { int x1; int x2; int x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; int x10; int x11; float x12; float x13; float x14; float x15; struct { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; } x16; struct { float x_17_1_1; float x_17_1_2; float x_17_1_3; float x_17_1_4; } x17; float x18; int x19; int x20; }*)arg1;
- (float)threadSignedArea:(struct { int x1; int x2; int x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; int x10; int x11; float x12; float x13; float x14; float x15; struct { float x_16_1_1; float x_16_1_2; float x_16_1_3; float x_16_1_4; } x16; struct { float x_17_1_1; float x_17_1_2; float x_17_1_3; float x_17_1_4; } x17; float x18; int x19; int x20; }*)arg1 centroid:(struct CGPoint { double x1; double x2; })arg2;
- (void)transformConvexHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)transformGlobalsWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)transformRepairArray:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)trimConcaveFromHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (bool)trimEndPointFromHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (bool)trimStartPointFromHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg1;
- (bool)unpackToGlobalRepairDictionary:(id)arg1 convexHull:(struct { /* ? */ }**)arg2 facts:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; }*)arg3;
- (int)updateWithFaceIndex:(int)arg1;
- (int)updatedCheckpoint:(struct CGPoint { double x1; double x2; }*)arg1 withCheckpoint:(struct CGPoint { double x1; double x2; })arg2 checkpointIndex:(int)arg3 angle:(float)arg4 width:(int)arg5 height:(int)arg6 inChannel:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg7 threadIndex:(int)arg8 returningEdgeWidth:(float*)arg9;
- (int)widenedHull:(struct { /* ? */ }**)arg1 withHull:(struct { bool x1; int x2; int x3; struct CGPoint {} *x4; }*)arg2 by:(float)arg3;

@end
