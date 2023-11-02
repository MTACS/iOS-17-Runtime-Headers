
@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <NSCopying> {
    NSArray * _boundarySupplementaryItems;
    long long  _contentInsetsReference;
    double  _interSectionSpacing;
    long long  _scrollDirection;
}

@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (nonatomic) long long contentInsetsReference;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) long long scrollDirection;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)boundarySupplementaryItems;
- (long long)contentInsetsReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)differencesFromConfiguration:(id)arg1;
- (id)init;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 contentInsetsReference:(long long)arg4;
- (double)interSectionSpacing;
- (long long)scrollDirection;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setContentInsetsReference:(long long)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setScrollDirection:(long long)arg1;

@end
