
@protocol _UIForcedOrientationTransactionHandler <NSObject>

@required

- (void)cancelOrientationTransaction:(_UIForcedOrientationTransactionToken *)arg1;
- (void)commitOrientationTransaction:(_UIForcedOrientationTransactionToken *)arg1 animated:(bool)arg2;

@end
