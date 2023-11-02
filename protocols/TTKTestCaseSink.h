
@protocol TTKTestCaseSink <NSObject>

@required

- (void)addLayouts:(NSDictionary *)arg1;
- (void)close;
- (void)flush;
- (void)pushNextTestCase:(TTKTestCase *)arg1;

@end
