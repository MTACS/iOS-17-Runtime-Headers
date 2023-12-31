
@protocol IXCoordinatorWithPlaceholderPromise <NSObject>

@required

- (bool)hasPlaceholderPromise;
- (IXPlaceholder *)placeholderPromiseWithError:(id*)arg1;
- (bool)setPlaceholderPromise:(IXPlaceholder *)arg1 error:(id*)arg2;

@end
