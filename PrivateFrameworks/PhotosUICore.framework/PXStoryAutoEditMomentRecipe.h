
@interface PXStoryAutoEditMomentRecipe : NSObject {
    struct { 
        long long kind; 
        double duration; 
        union { 
            struct { 
                unsigned long long direction; 
                unsigned long long relativeMotion; 
            } pan; 
            struct { 
                unsigned long long direction; 
            } scale; 
            struct { 
                unsigned long long direction; 
            } rotate; 
            struct { 
                BOOL kind; 
                BOOL firstAssetDirection; 
            } wipe; 
        } settings; 
    }  _incomingTransition;
    struct { 
        long long kind; 
        double duration; 
        union { 
            struct { 
                unsigned long long direction; 
                unsigned long long relativeMotion; 
            } pan; 
            struct { 
                unsigned long long direction; 
            } scale; 
            struct { 
                unsigned long long direction; 
            } rotate; 
            struct { 
                BOOL kind; 
                BOOL firstAssetDirection; 
            } wipe; 
        } settings; 
    }  _innerTransition;
    struct { 
        long long style; 
        union { 
            struct { 
                unsigned long long direction; 
                unsigned long long relativeMotion; 
            } pan; 
            struct { 
                unsigned long long direction; 
            } scale; 
            struct { 
                unsigned long long direction; 
            } rotate; 
        } settings; 
    }  _motion;
    unsigned long long  _recipeType;
}

@property (nonatomic, readonly) struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; } incomingTransition;
@property (nonatomic, readonly) struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; } innerTransition;
@property (nonatomic, readonly) struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; } motion;
@property (nonatomic, readonly) unsigned long long recipeType;

- (id)description;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })incomingTransition;
- (id)init;
- (id)initWithRecipeType:(unsigned long long)arg1 incomingTransition:(struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })arg2 innerTransition:(struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })arg3 motion:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg4;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })innerTransition;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })motion;
- (unsigned long long)recipeType;

@end
