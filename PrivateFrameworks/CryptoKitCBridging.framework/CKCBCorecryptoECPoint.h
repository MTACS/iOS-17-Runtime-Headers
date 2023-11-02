
@interface CKCBCorecryptoECPoint : NSObject {
    struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; } * _group;
    struct ccec_affine_point { unsigned long long x1[1]; } * _point;
}

@property (nonatomic, readonly) struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*group;
@property (nonatomic, readonly) struct ccec_affine_point { unsigned long long x1[1]; }*point;

+ (unsigned long long)groupOrderByteCountForCP:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg1;

- (id)add:(id)arg1 corecryptoError:(int*)arg2;
- (void)dealloc;
- (struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)group;
- (id)initFromPublicKeyBytes:(id)arg1 inGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg2 compressed:(bool)arg3 corecryptoError:(int*)arg4;
- (id)initPoint:(struct ccec_affine_point { unsigned long long x1[1]; }*)arg1 onGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg2;
- (id)initWithGeneratorForCP:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg1;
- (id)initWithPublicKey:(struct ccec_pub_ctx { struct ccec_cp {} *x1; struct ccec_projective_point { unsigned long long x_2_1_1[1]; } x2[0]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)multiply:(id)arg1 corecryptoError:(int*)arg2;
- (struct ccec_affine_point { unsigned long long x1[1]; }*)point;
- (unsigned long long)pointAllocationSizeForGroup:(struct ccec_cp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg1;
- (id)serializedPublicKey:(bool)arg1;

@end
