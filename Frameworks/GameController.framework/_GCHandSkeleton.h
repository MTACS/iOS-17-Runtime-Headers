
@interface _GCHandSkeleton : NSObject {
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
        } boneTransforms[31]; 
    }  _boneData;
    long long  _handedness;
    long long  _interpolationMethod;
    float  _lastFingerPositions;
    GCPhysicalInputProfile * _physicalInput;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
            struct { 
                void*vector; 
            } dual; 
        } real; 
    }  referenceDQs;
    const struct { /* ? */ } ** referenceSkeletons;
}

@property (readonly) bool rightHand;

- (void).cxx_destruct;
- (struct { struct { struct { } x_1_1_1; } x1[31]; })_boneDataWithMotionRange:(long long)arg1 curlAmts:(const struct { float x1; float x2; float x3; float x4; float x5; }*)arg2;
- (struct { struct { struct { } x_1_1_1; } x1[31]; })_boneDataWithMotionRangeDq:(long long)arg1 curlAmts:(const struct { float x1; float x2; float x3; float x4; float x5; }*)arg2;
- (struct { struct { struct { } x_1_1_1; } x1[31]; })_convertToModelSpaceUsingDQs:(const struct { struct { struct { } x_1_1_1; } x1[31]; }*)arg1;
- (struct { struct { struct { } x_1_1_1; } x1[31]; })_convertToModelSpaceUsingMatrices:(const struct { struct { struct { } x_1_1_1; } x1[31]; }*)arg1;
- (void)_setInterpolationMethod:(long long)arg1;
- (struct { struct { struct { } x_1_1_1; } x1[31]; })boneDataWithTransformSpace:(long long)arg1 motionRange:(long long)arg2;
- (struct { struct { struct { } x_1_1_1; } x1[31]; })boneDataWithTransformSpace:(long long)arg1 referencePose:(long long)arg2;
- (bool)fingerPositionsChangedForCurlAmts:(const struct { float x1; float x2; float x3; float x4; float x5; }*)arg1;
- (float)getFingerCurlAmt:(const struct { float x1; float x2; float x3; float x4; float x5; }*)arg1 boneType:(long long)arg2;
- (id)initWithBoneData:(struct { struct { struct { } x_1_1_1; } x1[31]; })arg1 profile:(id)arg2 handedness:(long long)arg3;
- (bool)rightHand;

@end
