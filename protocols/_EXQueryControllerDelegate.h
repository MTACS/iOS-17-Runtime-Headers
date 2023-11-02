
@protocol _EXQueryControllerDelegate <NSObject>

@optional

- (void)queryControllerDidUpdate:(_EXQueryController *)arg1 difference:(NSOrderedCollectionDifference *)arg2;
- (void)queryControllerDidUpdate:(_EXQueryController *)arg1 enabledCount:(unsigned long long)arg2 disabledCount:(unsigned long long)arg3 unelectedCount:(unsigned long long)arg4;
- (void)queryControllerDidUpdate:(_EXQueryController *)arg1 resultDifference:(NSOrderedCollectionDifference *)arg2;

@end
