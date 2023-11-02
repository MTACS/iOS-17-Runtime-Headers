
@interface _TtC12GameCenterUIP33_70BCE0F81E66D9FA90EE8BB9B414A94429CollectionViewLayoutContainer : NSObject <NSCollectionLayoutContainer> {
    void contentInsets;
    void contentSize;
    void effectiveContentInsets;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } effectiveContentInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } effectiveContentSize;

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })effectiveContentInsets;
- (struct CGSize { double x1; double x2; })effectiveContentSize;
- (id)init;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEffectiveContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
