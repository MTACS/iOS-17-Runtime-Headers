
@protocol PXGViewSource <PXGLayoutContentSource>

@required

- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (<PXGViewUserData> *)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;

@end
