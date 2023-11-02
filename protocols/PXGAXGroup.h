
@protocol PXGAXGroup <PXGAXElement>

@required

- (<PXGAXGroupSource> *)axGroupSource;
- (<PXGAXInfoSource> *)axInfoSource;
- (NSArray *)axLeafs;
- (<PXGAXResponder> *)axNextResponder;
- (<PXGAXGroup> *)axParent;
- (long long)axRole;
- (NSArray *)axSubgroups;

@end
