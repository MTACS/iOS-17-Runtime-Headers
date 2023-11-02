
@protocol PXGSublayoutFaultingDelegate <NSObject>

@required

- (bool)layout:(PXGLayout *)arg1 shouldPreventFaultOutOfSublayout:(PXGLayout *)arg2;

@optional

- (bool)layout:(PXGLayout *)arg1 shouldFaultInSublayoutIfOutsideVisibleRect:(long long)arg2;

@end
