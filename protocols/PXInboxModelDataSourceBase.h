
@protocol PXInboxModelDataSourceBase <NSObject>

@required

- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForModel:(id <PXInboxModel>)arg1;
- (<PXInboxModel> *)modelAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (NSArray *)models;

@end
