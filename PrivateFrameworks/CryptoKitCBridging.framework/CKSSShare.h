
@interface CKSSShare : NSObject {
    struct ccss_shamir_share { struct cczp {} *x1; unsigned int x2; unsigned long long x3[0]; } * _share;
    unsigned long long  _share_size;
}

- (void)dealloc;
- (id)initWithParams:(struct ccss_shamir_parameters { unsigned int x1; struct cczp { unsigned long long x_2_1_1; unsigned long long x_2_1_2; struct cczp_funcs {} *x_2_1_3; unsigned long long x_2_1_4[0]; } x2; }*)arg1 share:(struct ccss_shamir_share { struct cczp {} *x1; unsigned int x2; unsigned long long x3[0]; }*)arg2;
- (id)initWithParams:(struct ccss_shamir_parameters { unsigned int x1; struct cczp { unsigned long long x_2_1_1; unsigned long long x_2_1_2; struct cczp_funcs {} *x_2_1_3; unsigned long long x_2_1_4[0]; } x2; }*)arg1 x:(unsigned int)arg2 y:(id)arg3;
- (struct ccss_shamir_share { struct cczp {} *x1; unsigned int x2; unsigned long long x3[0]; }*)share;
- (unsigned int)x;
- (id)y;

@end
