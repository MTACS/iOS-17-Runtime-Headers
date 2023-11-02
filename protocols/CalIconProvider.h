
@protocol CalIconProvider <NSObject>

@required

+ (<CalIconProvider> *)sharedInstance;

- (NSString *)identifierForIconWithDate:(NSDate *)arg1 inCalendar:(NSCalendar *)arg2;
- (NSData *)pngDataForIconWithIdentifier:(NSString *)arg1;

@end
