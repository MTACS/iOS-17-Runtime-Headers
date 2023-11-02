
@protocol UITextSearchAggregator <NSObject>

@required

- (NSOrderedSet *)allFoundRanges;
- (void)finishedSearching;
- (void)foundRange:(UITextRange *)arg1 forSearchString:(NSString *)arg2 inDocument:(id <NSObject><NSCopying>)arg3;
- (void)invalidate;
- (void)invalidateFoundRange:(UITextRange *)arg1 inDocument:(id <NSObject><NSCopying>)arg2;

@end
