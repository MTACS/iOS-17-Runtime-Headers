
@protocol ICLoggable <NSObject>

@required

- (NSString *)ic_loggingIdentifier;
- (NSDictionary *)ic_loggingValues;

@end
