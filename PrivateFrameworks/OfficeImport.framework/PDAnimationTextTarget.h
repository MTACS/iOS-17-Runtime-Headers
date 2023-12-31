
@interface PDAnimationTextTarget : PDAnimationShapeTarget {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mRange;
    int  mType;
}

- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
