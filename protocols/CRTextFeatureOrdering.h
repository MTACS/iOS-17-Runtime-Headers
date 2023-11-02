
@protocol CRTextFeatureOrdering

@required

- (NSArray *)orderAndGroupRegions:(NSArray *)arg1;

@optional

- (NSArray *)orderAndGroupRegions:(NSArray *)arg1 coarseDelegate:(id <CRCTLDDelegate>)arg2 fineDelegate:(id <CRCTLDDelegate>)arg3;
- (NSArray *)orderAndGroupRegions:(NSArray *)arg1 coarseDelegate:(id <CRCTLDDelegate>)arg2 fineDelegate:(id <CRCTLDDelegate>)arg3 coarseOnly:(bool)arg4;
- (NSArray *)orderAndGroupRegions:(NSArray *)arg1 tableGroups:(NSArray *)arg2;

@end
