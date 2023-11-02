
@protocol PXGAXResponder <NSObject>

@required

- (NSObject<PXAnonymousScrollView> *)axContainingScrollViewForAXGroup:(id <PXGAXGroup>)arg1;
- (void)axGroup:(id <PXGAXGroup>)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (bool)axGroup:(id <PXGAXGroup>)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (<PXGAXResponder> *)axNextResponder;
- (void)setAxNextResponder:(id <PXGAXResponder>)arg1;

@end
