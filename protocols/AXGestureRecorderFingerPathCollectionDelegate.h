
@protocol AXGestureRecorderFingerPathCollectionDelegate <NSObject>

@required

- (void)gestureRecorderFingerPathCollection:(AXGestureRecorderFingerPathCollection *)arg1 didInsertFingerPathAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderFingerPathCollection:(AXGestureRecorderFingerPathCollection *)arg1 didUpdateFingerPathAtIndex:(unsigned long long)arg2;

@end
