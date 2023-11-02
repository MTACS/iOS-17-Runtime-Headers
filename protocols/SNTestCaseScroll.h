
@protocol SNTestCaseScroll <SNTestCase>

@required

- (long long)iterations;
- (long long)offset;
- (UIScrollView *)scrollViewWithContext:(SNTestContext *)arg1;

@optional

- (long long)numberOfScreens;
- (unsigned long long)scrollDirection;

@end
