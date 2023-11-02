
@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes {
    unsigned long long  _candidateNumber;
    double  _contentAlpha;
    unsigned long long  _row;
}

@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) double contentAlpha;
@property (nonatomic) unsigned long long row;

- (unsigned long long)candidateNumber;
- (double)contentAlpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)row;
- (void)setCandidateNumber:(unsigned long long)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setRow:(unsigned long long)arg1;

@end
