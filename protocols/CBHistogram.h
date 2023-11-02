
@protocol CBHistogram

@required

- (NSMutableArray *)bins;
- (NSArray *)edges;
- (void)enumerateBinsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSString *, NSNumber *, void*

@end
