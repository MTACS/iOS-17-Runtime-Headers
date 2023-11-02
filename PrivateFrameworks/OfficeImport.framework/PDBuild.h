
@interface PDBuild : NSObject {
    OADDrawable * mDrawable;
    bool  mIsAnimateBackground;
}

- (void).cxx_destruct;
- (id)description;
- (id)drawable;
- (unsigned long long)hash;
- (id)init;
- (bool)isAnimateBackground;
- (bool)isEqual:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setIsAnimateBackground:(bool)arg1;

@end
