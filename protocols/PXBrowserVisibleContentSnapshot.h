
@protocol PXBrowserVisibleContentSnapshot <NSObject>

@required

- (NSDateInterval *)dateInterval;
- (unsigned long long)dateIntervalGranularity;
- (NSArray *)locationNames;

@optional

- (NSString *)localizedPlaceholderText;

@end
