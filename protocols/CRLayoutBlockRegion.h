
@protocol CRLayoutBlockRegion <CRDirectionalRegion, CRIdentifiable>

@required

- (bool)canWrapToNextBlock;
- (NSArray *)layoutLines;
- (void)removeLine:(NSObject<CRLayoutLine> *)arg1;

@end
