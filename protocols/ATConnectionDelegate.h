
@protocol ATConnectionDelegate <NSObject>

@optional

- (void)connection:(ATConnection *)arg1 updatedAssets:(NSArray *)arg2;
- (void)connection:(ATConnection *)arg1 updatedProgress:(NSDictionary *)arg2;
- (void)connectionWasInterrupted:(ATConnection *)arg1;

@end
