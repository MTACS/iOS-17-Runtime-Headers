
@protocol CRNScrollTestParameters <NSObject>

@required

- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (RCPSyntheticEventStream *)eventStream;
- (void)setTestName:(NSString *)arg1;
- (NSString *)testName;

@end
